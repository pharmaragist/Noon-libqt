#pragma once

#include <QtCore/qglobal.h>
#include <QtGui/QImage>
#include <QtGui/QPainter>
#include <QtQml/qqml.h>
#include <QtQml/qqmlregistration.h>
#include <QtQuick/QQuickPaintedItem>
#include <QtQuick/QQuickWindow>
// X11/X.h + Xlib.h define None/Unsorted/Bool/Status/True/False as macros;
// keep them from leaking into Qt headers parsed later in the same TU.
#pragma push_macro("None")
#pragma push_macro("Unsorted")
#pragma push_macro("Bool")
#pragma push_macro("Status")
#pragma push_macro("True")
#pragma push_macro("False")
#include <X11/Xcursor/Xcursor.h>
#pragma pop_macro("False")
#pragma pop_macro("True")
#pragma pop_macro("Status")
#pragma pop_macro("Bool")
#pragma pop_macro("Unsorted")
#pragma pop_macro("None")

Q_STATIC_ASSERT(Q_BYTE_ORDER == Q_LITTLE_ENDIAN);

class CursorImage : public QQuickPaintedItem {
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(QString theme READ theme WRITE setTheme NOTIFY themeChanged)
    Q_PROPERTY(QString cursor READ cursor WRITE setCursor NOTIFY cursorChanged)
    Q_PROPERTY(int size READ size WRITE setSize NOTIFY sizeChanged)

public:
    explicit CursorImage(QQuickItem *parent = nullptr) : QQuickPaintedItem(parent) {
        setFlag(ItemHasContents, true);
    }

    QString theme() const { return m_theme; }
    void setTheme(const QString &theme) {
        if (m_theme != theme) {
            m_theme = theme;
            emit themeChanged();
            updateCursor();
        }
    }

    QString cursor() const { return m_cursor; }
    void setCursor(const QString &cursor) {
        if (m_cursor != cursor) {
            m_cursor = cursor;
            emit cursorChanged();
            updateCursor();
        }
    }

    int size() const { return m_size; }
    void setSize(int size) {
        if (m_size != size) {
            m_size = size;
            emit sizeChanged();
            updateCursor();
        }
    }

    void paint(QPainter *painter) override {
        if (!m_image.isNull())
            painter->drawImage(boundingRect(), m_image);
    }

signals:
    void themeChanged();
    void cursorChanged();
    void sizeChanged();

protected:
    void itemChange(ItemChange change, const ItemChangeData &data) override {
        QQuickPaintedItem::itemChange(change, data);
        if (change == ItemSceneChange || change == ItemDevicePixelRatioHasChanged)
            updateCursor();
    }

private:
    void updateCursor() {
        if (m_theme.isEmpty() || m_cursor.isEmpty())
            return;

        const qreal dpr = window() ? window()->devicePixelRatio() : 1.0;
        const int targetSize = m_size > 0 ? m_size : 32;
        const int loadSize = qRound(targetSize * dpr);

        XcursorImage *ximg = XcursorLibraryLoadImage(
            m_cursor.toUtf8().constData(),
            m_theme.toUtf8().constData(),
            loadSize
        );

        if (!ximg) {
            m_image = QImage();
            update();
            return;
        }

        QImage img(reinterpret_cast<uchar *>(ximg->pixels), ximg->width, ximg->height, QImage::Format_ARGB32_Premultiplied);
        m_image = img.copy();
        XcursorImageDestroy(ximg);

        setImplicitWidth(m_image.width() / dpr);
        setImplicitHeight(m_image.height() / dpr);
        update();
    }

    QString m_theme;
    QString m_cursor{QStringLiteral("left_ptr")};
    int m_size{32};
    QImage m_image;
};
