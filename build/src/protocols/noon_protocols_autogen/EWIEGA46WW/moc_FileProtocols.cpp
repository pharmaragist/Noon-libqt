/****************************************************************************
** Meta object code from reading C++ file 'FileProtocols.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/protocols/FileProtocols.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileProtocols.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13FileProtocolsE_t {};
} // unnamed namespace

template <> constexpr inline auto FileProtocols::qt_create_metaobjectdata<qt_meta_tag_ZN13FileProtocolsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileProtocols",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "exists",
        "",
        "path",
        "size",
        "isReadable",
        "isWritable",
        "absolutePath",
        "extension",
        "read",
        "readText",
        "write",
        "data",
        "append",
        "writeText",
        "copy",
        "src",
        "dst",
        "move",
        "rename",
        "oldPath",
        "newPath",
        "remove",
        "ensureDir",
        "removeDir",
        "recursive"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'exists'
        QtMocHelpers::MethodData<bool(const QString &) const>(5, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'size'
        QtMocHelpers::MethodData<qint64(const QString &) const>(8, 6, QMC::AccessPublic, QMetaType::LongLong, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'isReadable'
        QtMocHelpers::MethodData<bool(const QString &) const>(9, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'isWritable'
        QtMocHelpers::MethodData<bool(const QString &) const>(10, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'absolutePath'
        QtMocHelpers::MethodData<QString(const QString &) const>(11, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'extension'
        QtMocHelpers::MethodData<QString(const QString &) const>(12, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'read'
        QtMocHelpers::MethodData<QByteArray(const QString &) const>(13, 6, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'readText'
        QtMocHelpers::MethodData<QString(const QString &) const>(14, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'write'
        QtMocHelpers::MethodData<bool(const QString &, const QByteArray &, bool) const>(15, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 }, { QMetaType::QByteArray, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Method 'write'
        QtMocHelpers::MethodData<bool(const QString &, const QByteArray &) const>(15, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 7 }, { QMetaType::QByteArray, 16 },
        }}),
        // Method 'writeText'
        QtMocHelpers::MethodData<bool(const QString &, const QString &, bool) const>(18, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Method 'writeText'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(18, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 16 },
        }}),
        // Method 'copy'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(19, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 20 }, { QMetaType::QString, 21 },
        }}),
        // Method 'move'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(22, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 20 }, { QMetaType::QString, 21 },
        }}),
        // Method 'rename'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(23, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 24 }, { QMetaType::QString, 25 },
        }}),
        // Method 'remove'
        QtMocHelpers::MethodData<bool(const QString &) const>(26, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'ensureDir'
        QtMocHelpers::MethodData<bool(const QString &) const>(27, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
        // Method 'removeDir'
        QtMocHelpers::MethodData<bool(const QString &, bool) const>(28, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 7 }, { QMetaType::Bool, 29 },
        }}),
        // Method 'removeDir'
        QtMocHelpers::MethodData<bool(const QString &) const>(28, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<FileProtocols, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject FileProtocols::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileProtocolsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileProtocolsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13FileProtocolsE_t>.metaTypes,
    nullptr
} };

void FileProtocols::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileProtocols *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->exists((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { qint64 _r = _t->size((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<qint64*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isReadable((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isWritable((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->absolutePath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->extension((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QByteArray _r = _t->read((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->readText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->write((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->write((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->writeText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->writeText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->copy((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->move((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->rename((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->remove((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->ensureDir((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->removeDir((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->removeDir((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *FileProtocols::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileProtocols::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FileProtocolsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileProtocols::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
