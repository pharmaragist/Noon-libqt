/****************************************************************************
** Meta object code from reading C++ file 'LatexRenderer.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/utils/latex/LatexRenderer.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LatexRenderer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13LatexRendererE_t {};
} // unnamed namespace

template <> constexpr inline auto LatexRenderer::qt_create_metaobjectdata<qt_meta_tag_ZN13LatexRendererE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LatexRenderer",
        "QML.Element",
        "auto",
        "expressionChanged",
        "",
        "cacheDirChanged",
        "textSizeChanged",
        "foregroundChanged",
        "backgroundChanged",
        "cacheEnabledChanged",
        "busyChanged",
        "renderError",
        "msg",
        "renderStarted",
        "renderFinished",
        "cached",
        "hash",
        "filePath",
        "clearCache",
        "hashFor",
        "e",
        "isCached",
        "preRender",
        "expression",
        "cacheDir",
        "textSize",
        "foreground",
        "QColor",
        "background",
        "cacheEnabled",
        "busy"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'expressionChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheDirChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textSizeChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'foregroundChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheEnabledChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'busyChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'renderError'
        QtMocHelpers::SignalData<void(const QString &)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'renderStarted'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'renderFinished'
        QtMocHelpers::SignalData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cached'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { QMetaType::QString, 17 },
        }}),
        // Method 'clearCache'
        QtMocHelpers::MethodData<void()>(18, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'hashFor'
        QtMocHelpers::MethodData<QString(const QString &) const>(19, 4, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 20 },
        }}),
        // Method 'isCached'
        QtMocHelpers::MethodData<bool(const QString &) const>(21, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 20 },
        }}),
        // Method 'preRender'
        QtMocHelpers::MethodData<void(const QString &)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'expression'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'cacheDir'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'textSize'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'foreground'
        QtMocHelpers::PropertyData<QColor>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'background'
        QtMocHelpers::PropertyData<QColor>(28, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'cacheEnabled'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'busy'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<LatexRenderer, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject LatexRenderer::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13LatexRendererE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13LatexRendererE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13LatexRendererE_t>.metaTypes,
    nullptr
} };

void LatexRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LatexRenderer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->expressionChanged(); break;
        case 1: _t->cacheDirChanged(); break;
        case 2: _t->textSizeChanged(); break;
        case 3: _t->foregroundChanged(); break;
        case 4: _t->backgroundChanged(); break;
        case 5: _t->cacheEnabledChanged(); break;
        case 6: _t->busyChanged(); break;
        case 7: _t->renderError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->renderStarted(); break;
        case 9: _t->renderFinished(); break;
        case 10: _t->cached((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->clearCache(); break;
        case 12: { QString _r = _t->hashFor((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isCached((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->preRender((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::expressionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::cacheDirChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::textSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::foregroundChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::backgroundChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::cacheEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::busyChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)(const QString & )>(_a, &LatexRenderer::renderError, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::renderStarted, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)()>(_a, &LatexRenderer::renderFinished, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (LatexRenderer::*)(const QString & , const QString & )>(_a, &LatexRenderer::cached, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->expression(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->cacheDir(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->textSize(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->foreground(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->background(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->cacheEnabled(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->busy(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpression(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setCacheDir(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setTextSize(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setForeground(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setBackground(*reinterpret_cast<QColor*>(_v)); break;
        case 5: _t->setCacheEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *LatexRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatexRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13LatexRendererE_t>.strings))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int LatexRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LatexRenderer::expressionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LatexRenderer::cacheDirChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LatexRenderer::textSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LatexRenderer::foregroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LatexRenderer::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LatexRenderer::cacheEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LatexRenderer::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LatexRenderer::renderError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void LatexRenderer::renderStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LatexRenderer::renderFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void LatexRenderer::cached(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}
QT_WARNING_POP
