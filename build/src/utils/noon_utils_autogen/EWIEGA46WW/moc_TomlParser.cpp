/****************************************************************************
** Meta object code from reading C++ file 'TomlParser.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/utils/TomlParser.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TomlParser.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10TomlParserE_t {};
} // unnamed namespace

template <> constexpr inline auto TomlParser::qt_create_metaobjectdata<qt_meta_tag_ZN10TomlParserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TomlParser",
        "QML.Element",
        "auto",
        "parse",
        "QVariantMap",
        "",
        "filePath",
        "parseString",
        "toml",
        "parseTemplates",
        "QVariantList",
        "parseTemplatesString",
        "addTemplate",
        "name",
        "inputPath",
        "outputPath",
        "removeTemplate",
        "enableTemplate",
        "setTemplate"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'parse'
        QtMocHelpers::MethodData<QVariantMap(const QString &)>(3, 5, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'parseString'
        QtMocHelpers::MethodData<QVariantMap(const QString &)>(7, 5, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::QString, 8 },
        }}),
        // Method 'parseTemplates'
        QtMocHelpers::MethodData<QVariantList(const QString &)>(9, 5, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'parseTemplatesString'
        QtMocHelpers::MethodData<QVariantList(const QString &)>(11, 5, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 8 },
        }}),
        // Method 'addTemplate'
        QtMocHelpers::MethodData<bool(const QString &, const QString &, const QString &, const QString &)>(12, 5, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
        }}),
        // Method 'removeTemplate'
        QtMocHelpers::MethodData<bool(const QString &, const QString &)>(16, 5, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 }, { QMetaType::QString, 13 },
        }}),
        // Method 'enableTemplate'
        QtMocHelpers::MethodData<bool(const QString &, const QString &)>(17, 5, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 }, { QMetaType::QString, 13 },
        }}),
        // Method 'setTemplate'
        QtMocHelpers::MethodData<bool(const QString &, const QString &, const QString &, const QString &)>(18, 5, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<TomlParser, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject TomlParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TomlParserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TomlParserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10TomlParserE_t>.metaTypes,
    nullptr
} };

void TomlParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TomlParser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantMap _r = _t->parse((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantMap _r = _t->parseString((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantList _r = _t->parseTemplates((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantList _r = _t->parseTemplatesString((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->addTemplate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->removeTemplate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->enableTemplate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setTemplate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *TomlParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TomlParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TomlParserE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TomlParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
