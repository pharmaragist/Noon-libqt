/****************************************************************************
** Meta object code from reading C++ file 'HyprBridge.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/hypr/HyprBridge.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HyprBridge.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10HyprBridgeE_t {};
} // unnamed namespace

template <> constexpr inline auto HyprBridge::qt_create_metaobjectdata<qt_meta_tag_ZN10HyprBridgeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HyprBridge",
        "QML.Element",
        "auto",
        "windowListChanged",
        "",
        "windowByAddressChanged",
        "workspacesChanged",
        "workspaceByIdChanged",
        "activeWorkspaceChanged",
        "monitorsChanged",
        "currentKeyboardLayoutChanged",
        "activeWindowChanged",
        "className",
        "title",
        "windowList",
        "QJsonArray",
        "windowByAddress",
        "QJsonObject",
        "workspaces",
        "workspaceById",
        "activeWorkspace",
        "monitors",
        "currentKeyboardLayout"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowListChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowByAddressChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'workspacesChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'workspaceByIdChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWorkspaceChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'monitorsChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentKeyboardLayoutChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'windowList'
        QtMocHelpers::PropertyData<QJsonArray>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'windowByAddress'
        QtMocHelpers::PropertyData<QJsonObject>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'workspaces'
        QtMocHelpers::PropertyData<QJsonArray>(18, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'workspaceById'
        QtMocHelpers::PropertyData<QJsonObject>(19, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'activeWorkspace'
        QtMocHelpers::PropertyData<QJsonObject>(20, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'monitors'
        QtMocHelpers::PropertyData<QJsonArray>(21, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'currentKeyboardLayout'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<HyprBridge, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject HyprBridge::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10HyprBridgeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10HyprBridgeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10HyprBridgeE_t>.metaTypes,
    nullptr
} };

void HyprBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HyprBridge *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowListChanged(); break;
        case 1: _t->windowByAddressChanged(); break;
        case 2: _t->workspacesChanged(); break;
        case 3: _t->workspaceByIdChanged(); break;
        case 4: _t->activeWorkspaceChanged(); break;
        case 5: _t->monitorsChanged(); break;
        case 6: _t->currentKeyboardLayoutChanged(); break;
        case 7: _t->activeWindowChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::windowListChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::windowByAddressChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::workspacesChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::workspaceByIdChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::activeWorkspaceChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::monitorsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)()>(_a, &HyprBridge::currentKeyboardLayoutChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprBridge::*)(const QString & , const QString & )>(_a, &HyprBridge::activeWindowChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QJsonArray*>(_v) = _t->windowList(); break;
        case 1: *reinterpret_cast<QJsonObject*>(_v) = _t->windowByAddress(); break;
        case 2: *reinterpret_cast<QJsonArray*>(_v) = _t->workspaces(); break;
        case 3: *reinterpret_cast<QJsonObject*>(_v) = _t->workspaceById(); break;
        case 4: *reinterpret_cast<QJsonObject*>(_v) = _t->activeWorkspace(); break;
        case 5: *reinterpret_cast<QJsonArray*>(_v) = _t->monitors(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->currentKeyboardLayout(); break;
        default: break;
        }
    }
}

const QMetaObject *HyprBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HyprBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10HyprBridgeE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HyprBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void HyprBridge::windowListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HyprBridge::windowByAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HyprBridge::workspacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HyprBridge::workspaceByIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HyprBridge::activeWorkspaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HyprBridge::monitorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void HyprBridge::currentKeyboardLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void HyprBridge::activeWindowChanged(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
