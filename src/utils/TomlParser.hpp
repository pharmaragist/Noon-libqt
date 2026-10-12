#pragma once

#include <QObject>
#include <QString>
#include <QVariantMap>
#include <QVariantList>
#include <QFile>
#include <QTextStream>
#include <QtQml/qqmlregistration.h>

class TomlParser : public QObject {
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
    Q_PROPERTY(QVariantList data READ data WRITE setData NOTIFY dataChanged)

private:
    QString m_path;
    QVariantList m_data;

public:
    explicit TomlParser(QObject *parent = nullptr) : QObject(parent) {}

    QString path() const { return m_path; }

    void setPath(const QString &newPath) {
        if (m_path == newPath) return;
        m_path = newPath;
        emit pathChanged();
        reload();
    }

    QVariantList data() const { return m_data; }

    void setData(const QVariantList &newData) {
        if (m_data == newData) return;
        m_data = newData;
        emit dataChanged();
    }

    Q_INVOKABLE void setTemplateEnabled(int index, bool enabled) {
        if (index < 0 || index >= m_data.size()) return;
        QVariantMap item = m_data[index].toMap();
        item[QStringLiteral("enabled")] = enabled;
        m_data[index] = item;
        emit dataChanged();
    }

    Q_INVOKABLE void reload() {
        m_data = parseTemplatesFile(m_path);
        emit dataChanged();
    }

    Q_INVOKABLE static QVariantList parseTemplatesString(const QString &content) {
        QVariantList list;
        QString currentSection;
        QVariantMap currentMap;
        bool isIgnored = false;

        const QStringList lines = content.split(QLatin1Char('\n'));

        auto flushSection = [&]() {
            if (!currentSection.isEmpty() && !isIgnored) {
                currentMap[QStringLiteral("name")] = currentSection;
                if (!currentMap.contains(QStringLiteral("enabled"))) {
                    currentMap[QStringLiteral("enabled")] = true;
                }
                list.append(currentMap);
            }
            currentSection.clear();
            currentMap.clear();
            isIgnored = false;
        };

        for (QString line : lines) {
            line = line.trimmed();

            if (line.isEmpty()) continue;

            if (line.startsWith(QLatin1String("#IGNORE"))) {
                isIgnored = true;
                continue;
            }

            if (line.startsWith(QLatin1Char('#'))) continue;

            if (line.startsWith(QLatin1String("[templates.")) && line.endsWith(QLatin1Char(']'))) {
                flushSection();
                currentSection = line.mid(11, line.length() - 12).trimmed();
                continue;
            }

            if (line.startsWith(QLatin1Char('['))) {
                flushSection();
                continue;
            }

            int eqIdx = line.indexOf(QLatin1Char('='));
            if (eqIdx != -1 && !currentSection.isEmpty()) {
                QString key = line.left(eqIdx).trimmed();
                QString rawVal = line.mid(eqIdx + 1).trimmed();

                if ((rawVal.startsWith(QLatin1Char('"')) && rawVal.endsWith(QLatin1Char('"'))) ||
                    (rawVal.startsWith(QLatin1Char('\'')) && rawVal.endsWith(QLatin1Char('\'')))) {
                    rawVal = rawVal.mid(1, rawVal.length() - 2);
                }

                if (rawVal == QLatin1String("true")) {
                    currentMap[key] = true;
                } else if (rawVal == QLatin1String("false")) {
                    currentMap[key] = false;
                } else {
                    currentMap[key] = rawVal;
                }
            }
        }

        flushSection();
        return list;
    }

    Q_INVOKABLE static QVariantList parseTemplatesFile(const QString &filePath) {
        QString cleanPath = filePath;
        if (cleanPath.startsWith(QLatin1String("file://"))) {
            cleanPath = cleanPath.mid(7);
        }

        QFile file(cleanPath);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            return {};
        }

        QTextStream in(&file);
        return parseTemplatesString(in.readAll());
    }

signals:
    void pathChanged();
    void dataChanged();
};
