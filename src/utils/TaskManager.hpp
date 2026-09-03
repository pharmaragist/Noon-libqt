#pragma once

#include <QtConcurrent/QtConcurrent>
#include <QtQml/qqmlregistration.h>

#include <QDir>
#include <QFile>
#include <QFutureWatcher>
#include <QHash>
#include <QMap>
#include <QObject>
#include <QThread>
#include <QTimer>
#include <QVariantList>
#include <QVariantMap>

#include <chrono>
#include <csignal>
#include <pwd.h>
#include <unistd.h>


inline QString readFile(const QString &path)
{
    QFile f(path);
    if (!f.open(QIODevice::ReadOnly))
        return {};
    return QString::fromUtf8(f.readAll());
}

struct ProcCpu {
    unsigned long long utime = 0;
    unsigned long long stime = 0;
};

struct ScanContext {
    QMap<qint64, ProcCpu> prevCpu;
    QHash<qint64, uint> pidUid;
    double elapsedTicks = 1.0;
    int cpuCount = 1;
};

struct ScanResult {
    QVariantList processes;
    QMap<qint64, ProcCpu> cpuDelta;
    QHash<qint64, uint> pidUid;
};

// NSS lookups are slow and blocking; cache per scan so each uid is resolved once.
inline QString resolveUser(uint uid, QHash<uint, QString> &cache)
{
    auto it = cache.constFind(uid);
    if (it != cache.constEnd())
        return it.value();
    long bufsz = sysconf(_SC_GETPW_R_SIZE_MAX);
    if (bufsz <= 0)
        bufsz = 1024;
    QByteArray buf(static_cast<int>(bufsz), 0);
    struct passwd pwd;
    struct passwd *res = nullptr;
    QString user;
    if (getpwuid_r(uid, &pwd, buf.data(), buf.size(), &res) == 0 && res)
        user = QString::fromLatin1(pwd.pw_name);
    else
        user = QString::number(uid);
    cache.insert(uid, user);
    return user;
}

inline ScanResult scanProcesses(const ScanContext &ctx)
{
    static const long pagesize = sysconf(_SC_PAGESIZE);
    QDir procDir("/proc");
    auto entries = procDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    ScanResult out;
    out.pidUid = ctx.pidUid;
    QHash<uint, QString> users;
    QMap<qint64, ProcCpu> curCpu;

    for (const auto &entry : entries) {
        bool ok = false;
        pid_t pid = entry.toInt(&ok);
        if (!ok || pid <= 0)
            continue;

        auto stat = readFile(QStringLiteral("/proc/%1/stat").arg(entry));
        if (stat.isEmpty())
            continue;

        auto closeParen = stat.lastIndexOf(')');
        if (closeParen < 0)
            continue;

        auto afterParen = stat.mid(closeParen + 2);
        auto fields = afterParen.split(' ');
        if (fields.size() < 18)
            continue;

        char state = fields[0].isEmpty() ? '?' : fields[0].at(0).toLatin1();
        auto ppid = fields[1].toLongLong();
        auto utime = fields[11].toULongLong();
        auto stime = fields[12].toULongLong();
        int threads = fields[17].toInt();

        auto nameStart = stat.indexOf('(') + 1;
        auto name = stat.mid(nameStart, closeParen - nameStart);

        auto pid64 = static_cast<qint64>(pid);

        double cpuPct = 0.0;
        auto prevIt = ctx.prevCpu.constFind(pid64);
        if (prevIt != ctx.prevCpu.constEnd()) {
            auto dUtime = utime - prevIt->utime;
            auto dStime = stime - prevIt->stime;
            cpuPct = (dUtime + dStime) / ctx.elapsedTicks * 100.0 / ctx.cpuCount;
            if (cpuPct < 0.0)
                cpuPct = 0.0;
        }

        curCpu[pid64] = { utime, stime };

        // statm has RSS on one short line; status is huge by comparison.
        auto statm = readFile(QStringLiteral("/proc/%1/statm").arg(entry));
        unsigned long long rssPages = 0;
        {
            auto parts = statm.simplified().split(' ');
            if (parts.size() > 1)
                rssPages = parts[1].toULongLong();
        }

        uint uid = 0;
        auto uidIt = out.pidUid.constFind(pid64);
        if (uidIt != out.pidUid.constEnd()) {
            uid = *uidIt;
        } else {
            auto status = readFile(QStringLiteral("/proc/%1/status").arg(entry));
            for (const auto &line : status.split('\n'))
                if (line.startsWith("Uid:\t")) {
                    uid = line.mid(5).trimmed().section('\t', 0, 0).toUInt();
                    break;
                }
            out.pidUid.insert(pid64, uid);
        }
        QString user = resolveUser(uid, users);

        auto cmdlineRaw = readFile(QStringLiteral("/proc/%1/cmdline").arg(entry));
        QString cmdline;
        if (!cmdlineRaw.isEmpty()) {
            auto parts = cmdlineRaw.split('\0');
            for (int i = 0; i < parts.size(); ++i) {
                if (!parts[i].isEmpty()) {
                    if (!cmdline.isEmpty())
                        cmdline += ' ';
                    cmdline += parts[i];
                }
            }
        }

        QVariantMap p;
        p["pid"]         = pid64;
        p["ppid"]        = ppid;
        p["name"]        = name;
        p["command"]     = cmdline.isEmpty() ? name : cmdline;
        p["state"]       = QString(QChar::fromLatin1(state));
        p["cpuUsage"]    = qRound(cpuPct * 10.0) / 10.0;
        p["memoryUsage"] = static_cast<double>(rssPages * pagesize);
        p["threads"]     = threads;
        p["user"]        = user;

        out.processes.append(p);
    }

    for (auto it = out.pidUid.begin(); it != out.pidUid.end();)
        it = curCpu.contains(it.key()) ? std::next(it) : out.pidUid.erase(it); // drop dead pids

    out.cpuDelta = std::move(curCpu);
    return out;
}


class TaskManager : public QObject {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(QVariantList processes READ processes NOTIFY processesChanged)
    Q_PROPERTY(int processCount READ processCount NOTIFY processCountChanged)
    Q_PROPERTY(int updateInterval READ updateInterval WRITE setUpdateInterval NOTIFY updateIntervalChanged)

public:
    explicit TaskManager(QObject *parent = nullptr)
        : QObject(parent), m_cpuCount(QThread::idealThreadCount())
    {
        m_timer.setInterval(5000);
        connect(&m_timer, &QTimer::timeout, this, &TaskManager::refresh);
        m_timer.start();
        connect(&m_watcher, &QFutureWatcher<ScanResult>::finished, this, [this] {
            auto r = m_watcher.result();
            m_prevProcCpu = std::move(r.cpuDelta);
            m_pidUid = std::move(r.pidUid);
            m_processes = std::move(r.processes);
            const int count = m_processes.size();
            if (count != m_processCount) {
                m_processCount = count;
                emit processCountChanged();
            }
            emit processesChanged();
        });
    }

    ~TaskManager() { m_timer.stop(); }

    QVariantList processes() const { return m_processes; }
    int processCount() const { return m_processCount; }
    int updateInterval() const { return m_timer.interval(); }

    void setUpdateInterval(int ms) {
        if (ms > 0 && ms != updateInterval()) {
            m_timer.setInterval(ms);
            emit updateIntervalChanged();
        }
    }

    Q_INVOKABLE void refresh();
    Q_INVOKABLE bool terminate(qint64 pid) { return kill(pid, SIGTERM); }
    Q_INVOKABLE bool kill(qint64 pid, int sig = SIGKILL) {
        return ::kill(static_cast<pid_t>(pid), sig) == 0;
    }

signals:
    void processesChanged();
    void processCountChanged();
    void updateIntervalChanged();

private:
    QTimer m_timer;
    QFutureWatcher<ScanResult> m_watcher;
    QVariantList m_processes;
    QMap<qint64, ProcCpu> m_prevProcCpu;
    QHash<qint64, uint> m_pidUid;
    int m_processCount = 0;
    int m_cpuCount;

    using TimePoint = std::chrono::steady_clock::time_point;
    TimePoint m_lastRefresh = std::chrono::steady_clock::now();
};

inline void TaskManager::refresh()
{
    if (m_watcher.isRunning()) // previous scan still in flight: skip, don't pile up
        return;

    auto now = std::chrono::steady_clock::now();
    auto elapsedUs = std::chrono::duration_cast<std::chrono::microseconds>(now - m_lastRefresh).count();
    m_lastRefresh = now;

    auto hertz = static_cast<double>(sysconf(_SC_CLK_TCK));
    double elapsedTicks = static_cast<double>(elapsedUs) * hertz / 1000000.0;
    if (elapsedTicks < 0.001)
        elapsedTicks = 0.001;

    m_watcher.setFuture(QtConcurrent::run([ctx = ScanContext{ m_prevProcCpu, m_pidUid, elapsedTicks, m_cpuCount }] {
        return scanProcesses(ctx);
    }));
}
