/****************************************************************************
** Meta object code from reading C++ file 'SQLReader.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/utils/SQLReader.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SQLReader.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8SqlTableE_t {};
} // unnamed namespace

template <> constexpr inline auto SqlTable::qt_create_metaobjectdata<qt_meta_tag_ZN8SqlTableE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SqlTable",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "",
        "results",
        "QVariantList",
        "rows",
        "queryAll",
        "queryWhere",
        "QVariantMap",
        "cond",
        "queryFind",
        "col",
        "QVariant",
        "val",
        "name",
        "columns"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'results'
        QtMocHelpers::SignalData<void(QVariantList)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'queryAll'
        QtMocHelpers::MethodData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'queryWhere'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Method 'queryFind'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { 0x80000000 | 14, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'columns'
        QtMocHelpers::PropertyData<QStringList>(17, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<SqlTable, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SqlTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SqlTableE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SqlTableE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8SqlTableE_t>.metaTypes,
    nullptr
} };

void SqlTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SqlTable *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->results((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 1: _t->queryAll(); break;
        case 2: _t->queryWhere((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 3: _t->queryFind((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SqlTable::*)(QVariantList )>(_a, &SqlTable::results, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->columns(); break;
        default: break;
        }
    }
}

const QMetaObject *SqlTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SqlTableE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SqlTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SqlTable::results(QVariantList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN9SQLReaderE_t {};
} // unnamed namespace

template <> constexpr inline auto SQLReader::qt_create_metaobjectdata<qt_meta_tag_ZN9SQLReaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SQLReader",
        "QML.Element",
        "auto",
        "pathChanged",
        "",
        "loadingChanged",
        "loadedAtChanged",
        "errorChanged",
        "loaded",
        "queryFinished",
        "QVariantList",
        "rows",
        "snapshotReady",
        "QVariantMap",
        "data",
        "reload",
        "query",
        "sql",
        "bind",
        "snapshot",
        "path",
        "loading",
        "loadedAt",
        "error",
        "tables",
        "QQmlPropertyMap*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pathChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadingChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadedAtChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'errorChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loaded'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queryFinished'
        QtMocHelpers::SignalData<void(QVariantList)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'snapshotReady'
        QtMocHelpers::SignalData<void(QVariantMap)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'reload'
        QtMocHelpers::MethodData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'query'
        QtMocHelpers::MethodData<void(const QString &, const QVariantList &)>(16, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 }, { 0x80000000 | 10, 18 },
        }}),
        // Method 'query'
        QtMocHelpers::MethodData<void(const QString &)>(16, 4, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'snapshot'
        QtMocHelpers::MethodData<void()>(19, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'path'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'loading'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'loadedAt'
        QtMocHelpers::PropertyData<double>(22, QMetaType::Double, QMC::DefaultPropertyFlags, 2),
        // property 'error'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'tables'
        QtMocHelpers::PropertyData<QQmlPropertyMap*>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<SQLReader, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SQLReader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SQLReaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SQLReaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SQLReaderE_t>.metaTypes,
    nullptr
} };

void SQLReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SQLReader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->loadingChanged(); break;
        case 2: _t->loadedAtChanged(); break;
        case 3: _t->errorChanged(); break;
        case 4: _t->loaded(); break;
        case 5: _t->queryFinished((*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 6: _t->snapshotReady((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 7: _t->reload(); break;
        case 8: _t->query((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantList>>(_a[2]))); break;
        case 9: _t->query((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->snapshot(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)()>(_a, &SQLReader::pathChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)()>(_a, &SQLReader::loadingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)()>(_a, &SQLReader::loadedAtChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)()>(_a, &SQLReader::errorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)()>(_a, &SQLReader::loaded, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)(QVariantList )>(_a, &SQLReader::queryFinished, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SQLReader::*)(QVariantMap )>(_a, &SQLReader::snapshotReady, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->loading(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->loadedAt(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->error(); break;
        case 4: *reinterpret_cast<QQmlPropertyMap**>(_v) = _t->tables(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SQLReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SQLReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SQLReaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SQLReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
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
void SQLReader::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SQLReader::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SQLReader::loadedAtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SQLReader::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SQLReader::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SQLReader::queryFinished(QVariantList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void SQLReader::snapshotReady(QVariantMap _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
