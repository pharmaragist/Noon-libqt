#pragma once

#include <QtCore/QByteArray>
#include <QtCore/QCryptographicHash>
#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QObject>
#include <QtCore/QStandardPaths>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QtQml/qqml.h>
#include <QtQml/qqmlregistration.h>

class ImageDecoder : public QObject {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(QString source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(QString output READ output NOTIFY outputChanged)
    Q_PROPERTY(QString cacheDir READ cacheDir WRITE setCacheDir NOTIFY cacheDirChanged)
    Q_PROPERTY(int maxBytes READ maxBytes WRITE setMaxBytes NOTIFY maxBytesChanged)
    Q_PROPERTY(QString cachePath READ cachePath WRITE setCachePath NOTIFY cachePathChanged)

public:
    explicit ImageDecoder(QObject *parent = nullptr) : QObject(parent) {}

    QString source() const { return m_source; }
    void setSource(const QString &source) {
        if (m_source == source)
            return;
        m_source = source;
        emit sourceChanged();
        resolve();
    }

    QString output() const { return m_output; }

    QString cacheDir() const {
        if (!m_cacheDir.isEmpty())
            return m_cacheDir;
        return QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    }
    void setCacheDir(const QString &dir) {
        if (m_cacheDir == dir)
            return;
        m_cacheDir = dir;
        emit cacheDirChanged();
        // QML applies properties in any order: source may have resolved
        // against the default dir already. Re-resolve (disk hits: no rewrite).
        if (!m_source.trimmed().isEmpty())
            resolve();
    }

    int maxBytes() const { return m_maxBytes; }
    void setMaxBytes(int bytes) {
        if (m_maxBytes == bytes)
            return;
        m_maxBytes = bytes;
        emit maxBytesChanged();
    }

    // Extra folder probed (in place, no copy) for an already-decoded file
    // before any decode/download work happens. Also the write target when
    // set; cacheDir is only the fallback.
    QString cachePath() const { return m_cachePath; }
    void setCachePath(const QString &path) {
        if (m_cachePath == path)
            return;
        m_cachePath = path;
        emit cachePathChanged();
        // Like setCacheDir: source may have resolved against another dir already.
        if (!m_source.trimmed().isEmpty())
            resolve();
    }

signals:
    void sourceChanged();
    void outputChanged();
    void cacheDirChanged();
    void maxBytesChanged();
    void cachePathChanged();

private:
    void setOutput(const QString &output) {
        if (m_output == output)
            return;
        m_output = output;
        emit outputChanged();
    }

    static bool isHttp(const QString &s) {
        return s.startsWith(QStringLiteral("https://")) || s.startsWith(QStringLiteral("http://"));
    }

    static bool looksLikeRawBase64(const QString &s) {
        return !s.contains(QStringLiteral("://")) && s.length() > 512 && !QFile::exists(s)
            && !s.startsWith(QStringLiteral("/")) && !s.startsWith(QStringLiteral("file:"));
    }

    static QString sniffExtension(const QByteArray &bytes) {
        if (bytes.startsWith("\x89PNG\r\n\x1a\n"))
            return QStringLiteral("png");
        if (bytes.startsWith("\xFF\xD8\xFF"))
            return QStringLiteral("jpg");
        if (bytes.startsWith("RIFF") && bytes.size() > 12 && bytes.mid(8, 4) == "WEBP")
            return QStringLiteral("webp");
        if (bytes.startsWith("GIF87a") || bytes.startsWith("GIF89a"))
            return QStringLiteral("gif");
        if (bytes.startsWith("BM"))
            return QStringLiteral("bmp");
        return {};
    }

    static QString extensionFromDataUri(const QString &src) {
        const int comma = src.indexOf(',');
        const QString header = comma >= 0 ? src.left(comma) : src;
        const int mimeStart = 5;
        int mimeEnd = header.indexOf(';', mimeStart);
        if (mimeEnd < 0)
            mimeEnd = header.size();
        const int slash = header.indexOf('/', mimeStart);
        if (slash < 0 || slash > mimeEnd)
            return {};
        QString ext = header.mid(slash + 1, mimeEnd - slash - 1);
        if (ext.isEmpty() || ext.size() > 8 || ext.contains(' '))
            return {};
        if (ext == QStringLiteral("svg+xml"))
            ext = QStringLiteral("svg");
        else if (ext == QStringLiteral("jpeg"))
            ext = QStringLiteral("jpg");
        return ext;
    }

    static QString baseNameFor(const QString &key) {
        return QStringLiteral("noon-img-")
            + QString::fromLatin1(QCryptographicHash::hash(key.toUtf8(), QCryptographicHash::Md5).toHex());
    }

    QString cachePathFor(const QString &key, const QString &ext) const {
        if (key.isEmpty())
            return {};
        const QString name = baseNameFor(key)
            + (ext.isEmpty() ? QString() : QStringLiteral(".") + ext);
        // Writes go to cachePath when set, else cacheDir.
        QDir dir{m_cachePath.isEmpty() ? cacheDir() : m_cachePath};
        if (!dir.exists() && !dir.mkpath(QStringLiteral(".")))
            return QStandardPaths::writableLocation(QStandardPaths::TempLocation) + QLatin1Char('/') + name;
        return dir.filePath(name);
    }

    // True when `cachePath` already holds this source decoded: output points
    // at the existing file, no decode/download/write happens.
    bool checkExternalCache(const QString &src) {
        if (m_cachePath.isEmpty())
            return false;
        const QDir dir{m_cachePath};
        if (!dir.exists())
            return false;
        QStringList names;
        if (src.startsWith(QStringLiteral("data:"))) {
            const QString ext = extensionFromDataUri(src);
            if (!ext.isEmpty())
                names << baseNameFor(src) + QStringLiteral(".") + ext;
        }
        if (names.isEmpty()) {
            names << baseNameFor(src);
            static const char *exts[] = {"png", "jpg", "jpeg", "webp", "gif", "bmp", "svg", "img"};
            for (const char *e : exts)
                names << baseNameFor(src) + QStringLiteral(".") + QString::fromLatin1(e);
        }
        for (const QString &name : names) {
            if (dir.exists(name)) {
                setOutput(QUrl::fromLocalFile(dir.filePath(name)).toString());
                return true;
            }
        }
        return false;
    }

    static QNetworkAccessManager *sharedNam() {
        static QNetworkAccessManager *nam = new QNetworkAccessManager();
        return nam;
    }

    void abortPending() {
        if (m_reply) {
            m_reply->abort();
            m_reply = nullptr;
        }
    }

    bool writeCache(const QString &dest, const QByteArray &payload) {
        if (dest.isEmpty())
            return false;
        if (QFile::exists(dest))
            return true;
        QFile f(dest);
        if (!f.open(QIODevice::WriteOnly) || f.write(payload) != payload.size()) {
            f.remove();
            return false;
        }
        return true;
    }

    bool resolveDataOrBase64(const QString &src) {
        const bool isDataUri = src.startsWith(QStringLiteral("data:"));
        if (!isDataUri && !looksLikeRawBase64(src))
            return false;

        QByteArray payload;
        QString ext;
        if (isDataUri) {
            const QByteArray raw = src.toUtf8();
            const int comma = raw.indexOf(',');
            const QByteArray header = comma >= 0 ? raw.left(comma) : raw;
            const QByteArray body = comma >= 0 ? raw.mid(comma + 1) : QByteArray();
            ext = extensionFromDataUri(src);
            payload = header.contains(";base64")
                ? QByteArray::fromBase64(body)
                : QUrl::fromPercentEncoding(body).toUtf8();
        } else {
            payload = QByteArray::fromBase64(src.toUtf8());
        }

        if (payload.isEmpty()) {
            setOutput({});
            return true;
        }
        if (ext.isEmpty())
            ext = sniffExtension(payload);

        const QString dest = cachePathFor(src, ext);
        if (!writeCache(dest, payload)) {
            setOutput({});
            return true;
        }
        setOutput(QUrl::fromLocalFile(dest).toString());
        return true;
    }

    bool resolvePassthrough(const QString &src) {
        if (isHttp(src))
            return false;
        setOutput(src);
        return true;
    }

    void resolveRemote(const QString &src) {
        const QString dest = cachePathFor(src, QString());
        if (!dest.isEmpty() && QFile::exists(dest)) {
            setOutput(QUrl::fromLocalFile(dest).toString());
            return;
        }

        QNetworkRequest req;
        req.setUrl(QUrl(src));
        req.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);
        req.setTransferTimeout(15000);
        req.setRawHeader("User-Agent", "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 Noon/1.0");
        req.setRawHeader("Accept", "image/*,*/*;q=0.8");
        req.setMaximumRedirectsAllowed(5);

        const QString key = src;
        QNetworkReply *reply = sharedNam()->get(req);
        m_reply = reply;
        connect(reply, &QNetworkReply::finished, this, [this, reply, key, dest]() {
            if (m_reply == reply)
                m_reply = nullptr;
            reply->deleteLater();
            if (key != m_source.trimmed())
                return;

            if (reply->error() != QNetworkReply::NoError) {
                qWarning("ImageDecoder: download failed: %s", qPrintable(reply->errorString()));
                setOutput({});
                return;
            }
            const QByteArray bytes = reply->readAll();
            if (bytes.isEmpty() || bytes.size() > m_maxBytes) {
                qWarning("ImageDecoder: bad payload (%lld bytes)", (long long)bytes.size());
                setOutput({});
                return;
            }
            if (!writeCache(dest, bytes)) {
                qWarning("ImageDecoder: could not cache download");
                setOutput({});
                return;
            }
            setOutput(QUrl::fromLocalFile(dest).toString());
        });
    }

    void resolve() {
        abortPending();
        const QString src = m_source.trimmed();

        if (src.isEmpty()) {
            setOutput({});
            return;
        }
        if (checkExternalCache(src))
            return;
        if (resolveDataOrBase64(src))
            return;
        if (resolvePassthrough(src))
            return;
        resolveRemote(src);
    }

    QString m_source;
    QString m_output;
    QString m_cacheDir;
    QString m_cachePath;
    QNetworkReply *m_reply{nullptr};
    int m_maxBytes{5000000};
};
