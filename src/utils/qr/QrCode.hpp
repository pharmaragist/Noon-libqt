/*
 * QR code generation for Noon.Utils.Qr.
 * Qt wrapper derived from QrCodeGenerator by Alex Spataru (MIT).
 * Encoding core: vendored Project Nayuki qrcodegen (see qrcodegen/qrcodegen.h).
 */
#pragma once

#include <QImage>
#include <QObject>
#include <QPainter>
#include <QString>
#include <QtQml/qqmlregistration.h>
#include <QtQuick/QQuickPaintedItem>

#include "qrcodegen.h"

class QrCodeGenerator : public QObject
{
public:
  /**
   * @brief Constructs a QrCodeGenerator object.
   * @param parent The parent QObject.
   */
  explicit QrCodeGenerator(QObject *parent = nullptr);

  /**
   * @brief Generates a QR code from the given data and error correction level.
   * @param data The QString containing the data to encode in the QR code.
   * @param size The desired width/height of the generated image (default: 500).
   * @param borderSize The desired border width of the generated image (default:
   * 1).
   * @param errorCorrection The desired error correction level (default:
   * qrcodegen::QrCode::Ecc::MEDIUM).
   *
   * @return QImage containing the generated QR code.
   */
  QImage generateQr(const QString &data, const quint16 size = 1000,
                    const quint16 borderSize = 1,
                    qrcodegen::QrCode::Ecc errorCorrection
                    = qrcodegen::QrCode::Ecc::MEDIUM);

  /**
   * @brief Generates a QR code from the given data and error correction level.
   * @param data The QByteArray containing the data to encode in the QR code.
   * @param size The desired width/height of the generated image (default: 500).
   * @param borderSize The desired border width of the generated image (default:
   * 1).
   * @param errorCorrection The desired error correction level (default:
   * qrcodegen::QrCode::Ecc::MEDIUM).
   *
   * @return QImage containing the generated QR code.
   */
  QImage generateQr(const QByteArray &data, const quint16 size = 1000,
                    const quint16 borderSize = 1,
                    qrcodegen::QrCode::Ecc errorCorrection
                    = qrcodegen::QrCode::Ecc::MEDIUM);

  /**
   * @brief Generates a QR code from the given data and error correction level.
   * @param data The QString containing the data to encode in the QR code.
   * @param borderSize The desired border width of the generated image (default:
   * 1).
   * @param errorCorrection The desired error correction level (default:
   * qrcodegen::QrCode::Ecc::MEDIUM).
   *
   * @return QString string containing the generated QR code in SVG format.
   */
  QString generateSvgQr(const QString &data, const quint16 borderSize = 1,
                        qrcodegen::QrCode::Ecc errorCorrection
                        = qrcodegen::QrCode::Ecc::MEDIUM);

private:
  /**
   * @brief Converts a qrcodegen::QrCode object to a SVG image.
   * @param qrCode The qrcodegen::QrCode object to convert.
   * @param border The desired border width of the generated image (default: 1).
   *
   * @return SVG containing the QR code.
   */
  QString toSvgString(const qrcodegen::QrCode &qr, quint16 border) const;

  /**
   * @brief Converts a qrcodegen::QrCode object to a QImage.
   * @param qrCode The qrcodegen::QrCode object to convert.
   * @param size The desired width/height of the generated image.
   * @param borderSize The desired border width of the generated image.
   *
   * @return QImage containing the QR code.
   */
  QImage qrCodeToImage(const qrcodegen::QrCode &qrCode, quint16 border,
                       const quint16 size) const;
};

class QrCode : public QQuickPaintedItem {
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
    explicit QrCode(QQuickItem *parent = nullptr)
        : QQuickPaintedItem(parent) {}

    QString text() const { return m_text; }

    void setText(const QString &t) {
        if (m_text != t) {
            m_text = t;
            QrCodeGenerator gen;
            m_img = gen.generateQr(m_text);
            update();
            emit textChanged();
        }
    }

    void paint(QPainter *painter) override {
        if (m_img.isNull()) return;
        painter->setRenderHint(QPainter::Antialiasing, false);
        painter->setRenderHint(QPainter::SmoothPixmapTransform, false);
        painter->drawImage(boundingRect(), m_img);
    }

signals:
    void textChanged();

private:
    QString m_text;
    QImage m_img;
};
