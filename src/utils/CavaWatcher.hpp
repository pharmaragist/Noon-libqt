#pragma once
#include <QObject>
#include <QProcess>
#include <QList>
#include <QTemporaryDir>
#include <QFile>
#include <QString>
#include <vector>
#include <QtQml/qqmlregistration.h>

class CavaWatcher : public QObject {
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QList<double> data READ data NOTIFY dataChanged)
    Q_PROPERTY(bool active READ active WRITE setActive NOTIFY activeChanged)
    Q_PROPERTY(int smoothing READ smoothing WRITE setSmoothing NOTIFY smoothingChanged)
    Q_PROPERTY(int barCount READ barCount WRITE setBarCount NOTIFY barCountChanged)
    Q_PROPERTY(int framerate READ framerate WRITE setFramerate NOTIFY framerateChanged)
    Q_PROPERTY(QString input READ input WRITE setInput NOTIFY inputChanged)

private:
    void resizeBuffers() {
        m_data.resize(m_barCount, 0.0);
        m_previousWeights.assign(m_barCount, 0.0);
    }

    void restartIfActive() {
        if (m_active) { setActive(false); setActive(true); }
    }

    void onReadyRead() {
        if (!m_active) return;
        const QByteArray raw = m_process->readAllStandardOutput();
        const int frameSize = m_barCount * sizeof(uint16_t);
        if (raw.size() < frameSize) return;
        const auto *samples = reinterpret_cast<const uint16_t *>(raw.constData() + raw.size() - frameSize);
        const double sf = 1.0 / (m_smoothing + 1.0), inv = 1.0 - sf;
        for (int i = 0; i < m_barCount; ++i) {
            double val = (samples[i] / 32.0) * sf + m_previousWeights[i] * inv;
            m_previousWeights[i] = m_data[i] = val;
        }
        emit dataChanged();
    }

    QString writeConfig() const {
        const QString name = QStringLiteral("cava_%1.conf").arg(m_barCount);
        const QString path = m_tempDir.filePath(name);
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) return {};
        file.write("[general]\nbars = " + QByteArray::number(m_barCount)
                   + "\nframerate = " + QByteArray::number(m_framerate)
                   + "\n\n[input]\nmethod = " + m_input.toUtf8()
                   + "\nsource = auto\n\n[output]\n"
                     "method = raw\n"
                     "data_format = binary\n"
                     "bit_format = 16bit\n"
                     "raw_target = /dev/stdout\n");
        return path;
    }

public:
    explicit CavaWatcher(QObject *parent = nullptr) : QObject(parent),
                                                      m_process(new QProcess(this)),
                                                      m_tempDir() {
        connect(m_process, &QProcess::readyReadStandardOutput, this, &CavaWatcher::onReadyRead);
        connect(m_process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), this, [this](int, QProcess::ExitStatus) {
            if (!m_active) return;
            m_active = false;
            std::fill(m_data.begin(), m_data.end(), 0.0);
            emit dataChanged();
            emit activeChanged();
        });
        resizeBuffers();
    }

    ~CavaWatcher() {
        if (m_process->state() != QProcess::NotRunning) {
            m_process->terminate();
            m_process->waitForFinished(500);
        }
    }

    QList<double> data()       const { return m_data; }
    bool          active()     const { return m_active; }
    int           smoothing()  const { return m_smoothing; }
    int           barCount()   const { return m_barCount; }
    int           framerate()  const { return m_framerate; }
    QString       input()      const { return m_input; }

    void setSmoothing(int s) {
        if (m_smoothing == s) return;
        m_smoothing = s;
        m_previousWeights.assign(m_barCount, 0.0);
        emit smoothingChanged();
    }

    void setBarCount(int n) {
        if (m_barCount == n) return;
        m_barCount = n;
        resizeBuffers();
        emit barCountChanged();
        restartIfActive();
    }

    void setFramerate(int fps) {
        if (m_framerate == fps) return;
        m_framerate = fps;
        emit framerateChanged();
        restartIfActive();
    }

    void setInput(const QString &i) {
        if (m_input == i) return;
        m_input = i;
        emit inputChanged();
        restartIfActive();
    }

    void setActive(bool a) {
        if (m_active == a) return;
        m_active = a;
        if (m_active) {
            const QString configPath = writeConfig();
            if (configPath.isEmpty()) {
                m_active = false;
                emit activeChanged();
                return;
            }
            m_process->start("cava", QStringList() << "-p" << configPath);
            if (!m_process->waitForStarted(1000)) {
                m_active = false;
            }
        } else {
            m_process->terminate();
            if (!m_process->waitForFinished(500)) m_process->kill();
            std::fill(m_data.begin(), m_data.end(), 0.0);
            m_previousWeights.assign(m_barCount, 0.0);
            emit dataChanged();
        }
        emit activeChanged();
    }

signals:
    void dataChanged();
    void activeChanged();
    void smoothingChanged();
    void barCountChanged();
    void framerateChanged();
    void inputChanged();

private:
    static constexpr int m_defaultBars = 30;
    QProcess           *m_process;
    QTemporaryDir       m_tempDir;
    QList<double>       m_data;
    std::vector<double> m_previousWeights;
    int                 m_barCount   = m_defaultBars;
    int                 m_framerate  = 60;
    int                 m_smoothing  = 1;
    bool                m_active     = false;
    QString             m_input      = QStringLiteral("pulse");
};
