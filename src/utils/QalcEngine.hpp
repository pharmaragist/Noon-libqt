#pragma once
#include "base.hpp"
#include <QFutureWatcher>
#include <QJSValue>
#include <QtConcurrent/QtConcurrent>
#include <mutex>

#include <libqalculate/Calculator.h>

class QalcEngine : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString result READ result NOTIFY resultChanged)

public:
    explicit QalcEngine(QObject *parent = nullptr) : QObject(parent)
    {
        std::call_once(s_init, [] {
            calculator = new Calculator();
            calculator->loadGlobalDefinitions();
        });
        connect(&m_watcher, &QFutureWatcher<QString>::finished, this, &QalcEngine::onFinished);
    }

    ~QalcEngine() override
    {
        m_watcher.cancel();
        m_watcher.waitForFinished();
    }

    QString result() const { return m_result; }

    Q_INVOKABLE void calculate(const QString &expression, const QJSValue &callback = {})
    {
        const QString e = expression.trimmed();
        if (e.isEmpty()) {
            setResult(QStringLiteral(""));
            if (callback.isCallable()) callback.call({ QJSValue(QStringLiteral("")) });
            return;
        }

        m_callback = callback;
        if (m_watcher.isRunning()) m_watcher.cancel();
        m_watcher.setFuture(QtConcurrent::run([](const QString &expr) -> QString {
            std::lock_guard<std::mutex> lock(s_calcMutex);
            return QString::fromStdString(CALCULATOR->calculateAndPrint(expr.toStdString(), 5000));
        }, e));
    }

signals:
    void resultChanged();

private:
    void onFinished()
    {
        QString v;
        if (m_watcher.future().isResultReadyAt(0)) v = m_watcher.result();
        setResult(v);
        QJSValue cb = std::exchange(m_callback, {});
        if (cb.isCallable()) cb.call({ QJSValue(v) });
    }

    void setResult(const QString &v)
    {
        if (m_result == v) return;
        m_result = v;
        emit resultChanged();
    }

    QString m_result;
    QJSValue m_callback;
    QFutureWatcher<QString> m_watcher;

    // libqalculate allows exactly one Calculator per process and is not thread-safe
    static inline std::once_flag s_init;
    static inline std::mutex s_calcMutex;
};
