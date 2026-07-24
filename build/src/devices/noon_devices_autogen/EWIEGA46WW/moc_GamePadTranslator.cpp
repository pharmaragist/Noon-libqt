/****************************************************************************
** Meta object code from reading C++ file 'GamePadTranslator.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/devices/GamePadTranslator.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GamePadTranslator.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17GamePadTranslatorE_t {};
} // unnamed namespace

template <> constexpr inline auto GamePadTranslator::qt_create_metaobjectdata<qt_meta_tag_ZN17GamePadTranslatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GamePadTranslator",
        "QML.Element",
        "auto",
        "deviceConnected",
        "",
        "index",
        "name",
        "connected",
        "deviceDisconnected",
        "axisChanged",
        "value",
        "buttonPressed",
        "buttonReleased",
        "buttonChanged",
        "pressed",
        "anyButtonPressed",
        "anyButtonReleased",
        "faceDownPressed",
        "faceDownReleased",
        "faceRightPressed",
        "faceRightReleased",
        "faceLeftPressed",
        "faceLeftReleased",
        "faceUpPressed",
        "faceUpReleased",
        "lbPressed",
        "lbReleased",
        "rbPressed",
        "rbReleased",
        "lsPressed",
        "lsReleased",
        "rsPressed",
        "rsReleased",
        "menuStartPressed",
        "menuStartReleased",
        "menuBackPressed",
        "menuBackReleased",
        "dUpPressed",
        "dUpReleased",
        "dDownPressed",
        "dDownReleased",
        "dLeftPressed",
        "dLeftReleased",
        "dRightPressed",
        "dRightReleased",
        "leftStickMoved",
        "x",
        "y",
        "rightStickMoved",
        "leftTriggerMoved",
        "rightTriggerMoved",
        "buttonEvent",
        "button",
        "axisEvent",
        "axis",
        "axisValue",
        "i",
        "buttonValue",
        "deviceIndex",
        "axisCount",
        "buttonCount",
        "lx",
        "ly",
        "rx",
        "ry",
        "lt",
        "rt",
        "faceDown",
        "faceRight",
        "faceLeft",
        "faceUp",
        "lb",
        "rb",
        "ls",
        "rs",
        "menuStart",
        "menuBack",
        "dUp",
        "dDown",
        "dLeft",
        "dRight",
        "Button",
        "FaceDown",
        "FaceRight",
        "FaceLeft",
        "FaceUp",
        "LB",
        "RB",
        "LS",
        "RS",
        "MenuStart",
        "MenuBack",
        "DUp",
        "DDown",
        "DLeft",
        "DRight",
        "ButtonUnknown",
        "Axis",
        "LX",
        "LY",
        "RX",
        "RY",
        "LT",
        "RT",
        "AxisUnknown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'deviceConnected'
        QtMocHelpers::SignalData<void(int, const QString &, bool)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::QString, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Signal 'deviceDisconnected'
        QtMocHelpers::SignalData<void(int, const QString &)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::QString, 6 },
        }}),
        // Signal 'axisChanged'
        QtMocHelpers::SignalData<void(int, float)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Float, 10 },
        }}),
        // Signal 'buttonPressed'
        QtMocHelpers::SignalData<void(int)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'buttonReleased'
        QtMocHelpers::SignalData<void(int)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'buttonChanged'
        QtMocHelpers::SignalData<void(int, bool)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Bool, 14 },
        }}),
        // Signal 'anyButtonPressed'
        QtMocHelpers::SignalData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'anyButtonReleased'
        QtMocHelpers::SignalData<void()>(16, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceDownPressed'
        QtMocHelpers::SignalData<void()>(17, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceDownReleased'
        QtMocHelpers::SignalData<void()>(18, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceRightPressed'
        QtMocHelpers::SignalData<void()>(19, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceRightReleased'
        QtMocHelpers::SignalData<void()>(20, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceLeftPressed'
        QtMocHelpers::SignalData<void()>(21, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceLeftReleased'
        QtMocHelpers::SignalData<void()>(22, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceUpPressed'
        QtMocHelpers::SignalData<void()>(23, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'faceUpReleased'
        QtMocHelpers::SignalData<void()>(24, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lbPressed'
        QtMocHelpers::SignalData<void()>(25, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lbReleased'
        QtMocHelpers::SignalData<void()>(26, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rbPressed'
        QtMocHelpers::SignalData<void()>(27, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rbReleased'
        QtMocHelpers::SignalData<void()>(28, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lsPressed'
        QtMocHelpers::SignalData<void()>(29, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lsReleased'
        QtMocHelpers::SignalData<void()>(30, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rsPressed'
        QtMocHelpers::SignalData<void()>(31, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rsReleased'
        QtMocHelpers::SignalData<void()>(32, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuStartPressed'
        QtMocHelpers::SignalData<void()>(33, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuStartReleased'
        QtMocHelpers::SignalData<void()>(34, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuBackPressed'
        QtMocHelpers::SignalData<void()>(35, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'menuBackReleased'
        QtMocHelpers::SignalData<void()>(36, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dUpPressed'
        QtMocHelpers::SignalData<void()>(37, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dUpReleased'
        QtMocHelpers::SignalData<void()>(38, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dDownPressed'
        QtMocHelpers::SignalData<void()>(39, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dDownReleased'
        QtMocHelpers::SignalData<void()>(40, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dLeftPressed'
        QtMocHelpers::SignalData<void()>(41, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dLeftReleased'
        QtMocHelpers::SignalData<void()>(42, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dRightPressed'
        QtMocHelpers::SignalData<void()>(43, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dRightReleased'
        QtMocHelpers::SignalData<void()>(44, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftStickMoved'
        QtMocHelpers::SignalData<void(float, float)>(45, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 46 }, { QMetaType::Float, 47 },
        }}),
        // Signal 'rightStickMoved'
        QtMocHelpers::SignalData<void(float, float)>(48, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 46 }, { QMetaType::Float, 47 },
        }}),
        // Signal 'leftTriggerMoved'
        QtMocHelpers::SignalData<void(float)>(49, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 10 },
        }}),
        // Signal 'rightTriggerMoved'
        QtMocHelpers::SignalData<void(float)>(50, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 10 },
        }}),
        // Signal 'buttonEvent'
        QtMocHelpers::SignalData<void(int, bool)>(51, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 52 }, { QMetaType::Bool, 14 },
        }}),
        // Signal 'axisEvent'
        QtMocHelpers::SignalData<void(int, float)>(53, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 54 }, { QMetaType::Float, 10 },
        }}),
        // Method 'axisValue'
        QtMocHelpers::MethodData<float(int) const>(55, 4, QMC::AccessPublic, QMetaType::Float, {{
            { QMetaType::Int, 56 },
        }}),
        // Method 'buttonValue'
        QtMocHelpers::MethodData<bool(int) const>(57, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 56 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'deviceIndex'
        QtMocHelpers::PropertyData<int>(58, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'connected'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'axisCount'
        QtMocHelpers::PropertyData<int>(59, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'buttonCount'
        QtMocHelpers::PropertyData<int>(60, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'lx'
        QtMocHelpers::PropertyData<float>(61, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'ly'
        QtMocHelpers::PropertyData<float>(62, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'rx'
        QtMocHelpers::PropertyData<float>(63, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'ry'
        QtMocHelpers::PropertyData<float>(64, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'lt'
        QtMocHelpers::PropertyData<float>(65, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'rt'
        QtMocHelpers::PropertyData<float>(66, QMetaType::Float, QMC::DefaultPropertyFlags, 2),
        // property 'faceDown'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'faceRight'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'faceLeft'
        QtMocHelpers::PropertyData<bool>(69, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'faceUp'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'lb'
        QtMocHelpers::PropertyData<bool>(71, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'rb'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'ls'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'rs'
        QtMocHelpers::PropertyData<bool>(74, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'menuStart'
        QtMocHelpers::PropertyData<bool>(75, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'menuBack'
        QtMocHelpers::PropertyData<bool>(76, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'dUp'
        QtMocHelpers::PropertyData<bool>(77, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'dDown'
        QtMocHelpers::PropertyData<bool>(78, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'dLeft'
        QtMocHelpers::PropertyData<bool>(79, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'dRight'
        QtMocHelpers::PropertyData<bool>(80, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Button'
        QtMocHelpers::EnumData<enum Button>(81, 81, QMC::EnumIsScoped).add({
            {   82, Button::FaceDown },
            {   83, Button::FaceRight },
            {   84, Button::FaceLeft },
            {   85, Button::FaceUp },
            {   86, Button::LB },
            {   87, Button::RB },
            {   88, Button::LS },
            {   89, Button::RS },
            {   90, Button::MenuStart },
            {   91, Button::MenuBack },
            {   92, Button::DUp },
            {   93, Button::DDown },
            {   94, Button::DLeft },
            {   95, Button::DRight },
            {   96, Button::ButtonUnknown },
        }),
        // enum 'Axis'
        QtMocHelpers::EnumData<enum Axis>(97, 97, QMC::EnumIsScoped).add({
            {   98, Axis::LX },
            {   99, Axis::LY },
            {  100, Axis::RX },
            {  101, Axis::RY },
            {  102, Axis::LT },
            {  103, Axis::RT },
            {  104, Axis::AxisUnknown },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<GamePadTranslator, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject GamePadTranslator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17GamePadTranslatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17GamePadTranslatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17GamePadTranslatorE_t>.metaTypes,
    nullptr
} };

void GamePadTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GamePadTranslator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->deviceConnected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->deviceDisconnected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->axisChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 3: _t->buttonPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->buttonReleased((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->buttonChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->anyButtonPressed(); break;
        case 7: _t->anyButtonReleased(); break;
        case 8: _t->faceDownPressed(); break;
        case 9: _t->faceDownReleased(); break;
        case 10: _t->faceRightPressed(); break;
        case 11: _t->faceRightReleased(); break;
        case 12: _t->faceLeftPressed(); break;
        case 13: _t->faceLeftReleased(); break;
        case 14: _t->faceUpPressed(); break;
        case 15: _t->faceUpReleased(); break;
        case 16: _t->lbPressed(); break;
        case 17: _t->lbReleased(); break;
        case 18: _t->rbPressed(); break;
        case 19: _t->rbReleased(); break;
        case 20: _t->lsPressed(); break;
        case 21: _t->lsReleased(); break;
        case 22: _t->rsPressed(); break;
        case 23: _t->rsReleased(); break;
        case 24: _t->menuStartPressed(); break;
        case 25: _t->menuStartReleased(); break;
        case 26: _t->menuBackPressed(); break;
        case 27: _t->menuBackReleased(); break;
        case 28: _t->dUpPressed(); break;
        case 29: _t->dUpReleased(); break;
        case 30: _t->dDownPressed(); break;
        case 31: _t->dDownReleased(); break;
        case 32: _t->dLeftPressed(); break;
        case 33: _t->dLeftReleased(); break;
        case 34: _t->dRightPressed(); break;
        case 35: _t->dRightReleased(); break;
        case 36: _t->leftStickMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 37: _t->rightStickMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 38: _t->leftTriggerMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 39: _t->rightTriggerMoved((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 40: _t->buttonEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->axisEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2]))); break;
        case 42: { float _r = _t->axisValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<float*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->buttonValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , const QString & , bool )>(_a, &GamePadTranslator::deviceConnected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , const QString & )>(_a, &GamePadTranslator::deviceDisconnected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , float )>(_a, &GamePadTranslator::axisChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int )>(_a, &GamePadTranslator::buttonPressed, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int )>(_a, &GamePadTranslator::buttonReleased, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , bool )>(_a, &GamePadTranslator::buttonChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::anyButtonPressed, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::anyButtonReleased, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceDownPressed, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceDownReleased, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceRightPressed, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceRightReleased, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceLeftPressed, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceLeftReleased, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceUpPressed, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::faceUpReleased, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::lbPressed, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::lbReleased, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::rbPressed, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::rbReleased, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::lsPressed, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::lsReleased, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::rsPressed, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::rsReleased, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::menuStartPressed, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::menuStartReleased, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::menuBackPressed, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::menuBackReleased, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dUpPressed, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dUpReleased, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dDownPressed, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dDownReleased, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dLeftPressed, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dLeftReleased, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dRightPressed, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)()>(_a, &GamePadTranslator::dRightReleased, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(float , float )>(_a, &GamePadTranslator::leftStickMoved, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(float , float )>(_a, &GamePadTranslator::rightStickMoved, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(float )>(_a, &GamePadTranslator::leftTriggerMoved, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(float )>(_a, &GamePadTranslator::rightTriggerMoved, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , bool )>(_a, &GamePadTranslator::buttonEvent, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (GamePadTranslator::*)(int , float )>(_a, &GamePadTranslator::axisEvent, 41))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->deviceIndex(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->connected(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->axisCount(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->buttonCount(); break;
        case 5: *reinterpret_cast<float*>(_v) = _t->lx(); break;
        case 6: *reinterpret_cast<float*>(_v) = _t->ly(); break;
        case 7: *reinterpret_cast<float*>(_v) = _t->rx(); break;
        case 8: *reinterpret_cast<float*>(_v) = _t->ry(); break;
        case 9: *reinterpret_cast<float*>(_v) = _t->lt(); break;
        case 10: *reinterpret_cast<float*>(_v) = _t->rt(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->faceDown(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->faceRight(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->faceLeft(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->faceUp(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->lb(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->rb(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->ls(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->rs(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->menuStart(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->menuBack(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->dUp(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->dDown(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->dLeft(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->dRight(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDeviceIndex(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *GamePadTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePadTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17GamePadTranslatorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GamePadTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 44;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void GamePadTranslator::deviceConnected(int _t1, const QString & _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void GamePadTranslator::deviceDisconnected(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void GamePadTranslator::axisChanged(int _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void GamePadTranslator::buttonPressed(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void GamePadTranslator::buttonReleased(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void GamePadTranslator::buttonChanged(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void GamePadTranslator::anyButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GamePadTranslator::anyButtonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GamePadTranslator::faceDownPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void GamePadTranslator::faceDownReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void GamePadTranslator::faceRightPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GamePadTranslator::faceRightReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void GamePadTranslator::faceLeftPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GamePadTranslator::faceLeftReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GamePadTranslator::faceUpPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void GamePadTranslator::faceUpReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GamePadTranslator::lbPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void GamePadTranslator::lbReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GamePadTranslator::rbPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void GamePadTranslator::rbReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void GamePadTranslator::lsPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void GamePadTranslator::lsReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void GamePadTranslator::rsPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void GamePadTranslator::rsReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void GamePadTranslator::menuStartPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void GamePadTranslator::menuStartReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void GamePadTranslator::menuBackPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void GamePadTranslator::menuBackReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void GamePadTranslator::dUpPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void GamePadTranslator::dUpReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void GamePadTranslator::dDownPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void GamePadTranslator::dDownReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void GamePadTranslator::dLeftPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void GamePadTranslator::dLeftReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void GamePadTranslator::dRightPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void GamePadTranslator::dRightReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void GamePadTranslator::leftStickMoved(float _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 36, nullptr, _t1, _t2);
}

// SIGNAL 37
void GamePadTranslator::rightStickMoved(float _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 37, nullptr, _t1, _t2);
}

// SIGNAL 38
void GamePadTranslator::leftTriggerMoved(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 38, nullptr, _t1);
}

// SIGNAL 39
void GamePadTranslator::rightTriggerMoved(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 39, nullptr, _t1);
}

// SIGNAL 40
void GamePadTranslator::buttonEvent(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 40, nullptr, _t1, _t2);
}

// SIGNAL 41
void GamePadTranslator::axisEvent(int _t1, float _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1, _t2);
}
QT_WARNING_POP
