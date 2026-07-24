/****************************************************************************
** Meta object code from reading C++ file 'ScreenTimeManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/hypr/ScreenTimeManager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenTimeManager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ScreenTimeManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenTimeManager::qt_create_metaobjectdata<qt_meta_tag_ZN17ScreenTimeManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenTimeManager",
        "QML.Element",
        "auto",
        "appTimesChanged",
        "",
        "sessionsChanged",
        "bridgeChanged",
        "dbPathChanged",
        "saveIntervalChanged",
        "init",
        "parent",
        "dbPath",
        "getDay",
        "QJsonArray",
        "date",
        "getDayTotals",
        "getDayTimeline",
        "fromSec",
        "toSec",
        "bridge",
        "HyprBridge*",
        "appTimes",
        "sessions",
        "saveInterval"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appTimesChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionsChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bridgeChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dbPathChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveIntervalChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'init'
        QtMocHelpers::MethodData<void(QObject *, const QString &)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 10 }, { QMetaType::QString, 11 },
        }}),
        // Method 'init'
        QtMocHelpers::MethodData<void(QObject *)>(9, 4, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QObjectStar, 10 },
        }}),
        // Method 'getDay'
        QtMocHelpers::MethodData<QJsonArray(const QString &) const>(12, 4, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::QString, 14 },
        }}),
        // Method 'getDayTotals'
        QtMocHelpers::MethodData<QJsonArray(const QString &) const>(15, 4, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::QString, 14 },
        }}),
        // Method 'getDayTimeline'
        QtMocHelpers::MethodData<QJsonArray(const QString &, int, int) const>(16, 4, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::QString, 14 }, { QMetaType::Int, 17 }, { QMetaType::Int, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dbPath'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'bridge'
        QtMocHelpers::PropertyData<HyprBridge*>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'appTimes'
        QtMocHelpers::PropertyData<QJsonArray>(21, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'sessions'
        QtMocHelpers::PropertyData<QJsonArray>(22, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'saveInterval'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<ScreenTimeManager, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ScreenTimeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenTimeManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenTimeManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ScreenTimeManagerE_t>.metaTypes,
    nullptr
} };

void ScreenTimeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenTimeManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appTimesChanged(); break;
        case 1: _t->sessionsChanged(); break;
        case 2: _t->bridgeChanged(); break;
        case 3: _t->dbPathChanged(); break;
        case 4: _t->saveIntervalChanged(); break;
        case 5: _t->init((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->init((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 7: { QJsonArray _r = _t->getDay((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 8: { QJsonArray _r = _t->getDayTotals((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 9: { QJsonArray _r = _t->getDayTimeline((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QJsonArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreenTimeManager::*)()>(_a, &ScreenTimeManager::appTimesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenTimeManager::*)()>(_a, &ScreenTimeManager::sessionsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenTimeManager::*)()>(_a, &ScreenTimeManager::bridgeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenTimeManager::*)()>(_a, &ScreenTimeManager::dbPathChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenTimeManager::*)()>(_a, &ScreenTimeManager::saveIntervalChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->dbPath(); break;
        case 1: *reinterpret_cast<HyprBridge**>(_v) = _t->bridge(); break;
        case 2: *reinterpret_cast<QJsonArray*>(_v) = _t->appTimes(); break;
        case 3: *reinterpret_cast<QJsonArray*>(_v) = _t->sessions(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->saveInterval(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDbPath(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setBridge(*reinterpret_cast<HyprBridge**>(_v)); break;
        case 4: _t->setSaveInterval(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ScreenTimeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenTimeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenTimeManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScreenTimeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ScreenTimeManager::appTimesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScreenTimeManager::sessionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ScreenTimeManager::bridgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScreenTimeManager::dbPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ScreenTimeManager::saveIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
