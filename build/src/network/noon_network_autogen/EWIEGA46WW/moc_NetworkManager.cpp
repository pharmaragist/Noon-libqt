/****************************************************************************
** Meta object code from reading C++ file 'NetworkManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/network/NetworkManager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkManager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12NmControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto NmController::qt_create_metaobjectdata<qt_meta_tag_ZN12NmControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NmController",
        "QML.Element",
        "auto",
        "networkChanged",
        "",
        "speedChanged",
        "updateIntervalChanged",
        "toggleWifi",
        "enableWifi",
        "enabled",
        "rescanWifi",
        "connectToWifiNetwork",
        "ssid",
        "password",
        "disconnectWifiNetwork",
        "forgetWifiNetwork",
        "wifiEnabled",
        "ethernet",
        "wifi",
        "wifiStatus",
        "networkName",
        "networkStrength",
        "networkStrengthText",
        "downloadSpeedText",
        "uploadSpeedText",
        "materialSymbol",
        "ipAddress",
        "wifiNetworks",
        "QVariantList",
        "updateInterval"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'networkChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'speedChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateIntervalChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'toggleWifi'
        QtMocHelpers::MethodData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'enableWifi'
        QtMocHelpers::MethodData<void(bool)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Method 'rescanWifi'
        QtMocHelpers::MethodData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'connectToWifiNetwork'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
        // Method 'connectToWifiNetwork'
        QtMocHelpers::MethodData<void(const QString &)>(11, 4, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Method 'disconnectWifiNetwork'
        QtMocHelpers::MethodData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'forgetWifiNetwork'
        QtMocHelpers::MethodData<void(const QString &)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'wifiEnabled'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'ethernet'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'wifi'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'wifiStatus'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'networkName'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'networkStrength'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'networkStrengthText'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'downloadSpeedText'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'uploadSpeedText'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'materialSymbol'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'ipAddress'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'wifiNetworks'
        QtMocHelpers::PropertyData<QVariantList>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'updateInterval'
        QtMocHelpers::PropertyData<int>(29, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<NmController, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NmController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NmControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NmControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12NmControllerE_t>.metaTypes,
    nullptr
} };

void NmController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NmController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->networkChanged(); break;
        case 1: _t->speedChanged(); break;
        case 2: _t->updateIntervalChanged(); break;
        case 3: _t->toggleWifi(); break;
        case 4: _t->enableWifi((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->rescanWifi(); break;
        case 6: _t->connectToWifiNetwork((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->connectToWifiNetwork((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->disconnectWifiNetwork(); break;
        case 9: _t->forgetWifiNetwork((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NmController::*)()>(_a, &NmController::networkChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NmController::*)()>(_a, &NmController::speedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NmController::*)()>(_a, &NmController::updateIntervalChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->wifiEnabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->ethernet(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->wifi(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->wifiStatus(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->networkName(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->networkStrength(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->networkStrengthText(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->downloadSpeedText(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->uploadSpeedText(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->materialSymbol(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->ipAddress(); break;
        case 11: *reinterpret_cast<QVariantList*>(_v) = _t->wifiNetworks(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->updateInterval(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 12: _t->setUpdateInterval(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NmController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NmController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12NmControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NmController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void NmController::networkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NmController::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NmController::updateIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
