/****************************************************************************
** Meta object code from reading C++ file 'MpvPlayer.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/utils/MpvPlayer.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MpvPlayer.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9MpvPlayerE_t {};
} // unnamed namespace

template <> constexpr inline auto MpvPlayer::qt_create_metaobjectdata<qt_meta_tag_ZN9MpvPlayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MpvPlayer",
        "QML.Element",
        "sourceChanged",
        "",
        "autoplayChanged",
        "playingChanged",
        "loopChanged",
        "muteChanged",
        "framerateChanged",
        "mpvPropsChanged",
        "play",
        "pause",
        "togglePlayback",
        "stop",
        "load",
        "QUrl",
        "url",
        "source",
        "autoplay",
        "playing",
        "loop",
        "mute",
        "framerate",
        "mpvProps",
        "QVariantMap"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void()>(2, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoplayChanged'
        QtMocHelpers::SignalData<void()>(4, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'playingChanged'
        QtMocHelpers::SignalData<void()>(5, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loopChanged'
        QtMocHelpers::SignalData<void()>(6, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'muteChanged'
        QtMocHelpers::SignalData<void()>(7, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'framerateChanged'
        QtMocHelpers::SignalData<void()>(8, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mpvPropsChanged'
        QtMocHelpers::SignalData<void()>(9, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'play'
        QtMocHelpers::MethodData<void()>(10, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'pause'
        QtMocHelpers::MethodData<void()>(11, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'togglePlayback'
        QtMocHelpers::MethodData<void()>(12, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'stop'
        QtMocHelpers::MethodData<void()>(13, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'load'
        QtMocHelpers::MethodData<void(const QUrl &)>(14, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'source'
        QtMocHelpers::PropertyData<QUrl>(17, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'autoplay'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'playing'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'loop'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'mute'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'framerate'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'mpvProps'
        QtMocHelpers::PropertyData<QVariantMap>(23, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    0 },
    });
    return QtMocHelpers::metaObjectData<MpvPlayer, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject MpvPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<MpvAbstractItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MpvPlayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MpvPlayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9MpvPlayerE_t>.metaTypes,
    nullptr
} };

void MpvPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MpvPlayer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->autoplayChanged(); break;
        case 2: _t->playingChanged(); break;
        case 3: _t->loopChanged(); break;
        case 4: _t->muteChanged(); break;
        case 5: _t->framerateChanged(); break;
        case 6: _t->mpvPropsChanged(); break;
        case 7: _t->play(); break;
        case 8: _t->pause(); break;
        case 9: _t->togglePlayback(); break;
        case 10: _t->stop(); break;
        case 11: _t->load((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::sourceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::autoplayChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::playingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::loopChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::muteChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::framerateChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MpvPlayer::*)()>(_a, &MpvPlayer::mpvPropsChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->autoplay(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->playing(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->loop(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->mute(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->framerate(); break;
        case 6: *reinterpret_cast<QVariantMap*>(_v) = _t->mpvProps(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast<QUrl*>(_v)); break;
        case 1: _t->setAutoplay(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setLoop(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setMute(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setFramerate(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setMpvProps(*reinterpret_cast<QVariantMap*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MpvPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpvPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MpvPlayerE_t>.strings))
        return static_cast<void*>(this);
    return MpvAbstractItem::qt_metacast(_clname);
}

int MpvPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MpvAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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
void MpvPlayer::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MpvPlayer::autoplayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MpvPlayer::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MpvPlayer::loopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MpvPlayer::muteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MpvPlayer::framerateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MpvPlayer::mpvPropsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
