/****************************************************************************
** Meta object code from reading C++ file 'msgdispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/helper/pmon/msgdispatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgdispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusSignalDispatcher_t {
    QByteArrayData data[12];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusSignalDispatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusSignalDispatcher_t qt_meta_stringdata_DBusSignalDispatcher = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DBusSignalDispatcher"
QT_MOC_LITERAL(1, 21, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 37, 24), // "org.corectrl.helper.pmon"
QT_MOC_LITERAL(3, 62, 7), // "appExec"
QT_MOC_LITERAL(4, 70, 0), // ""
QT_MOC_LITERAL(5, 71, 4), // "data"
QT_MOC_LITERAL(6, 76, 9), // "signature"
QT_MOC_LITERAL(7, 86, 7), // "appExit"
QT_MOC_LITERAL(8, 94, 8), // "sendExec"
QT_MOC_LITERAL(9, 103, 8), // "sendExit"
QT_MOC_LITERAL(10, 112, 8), // "watchApp"
QT_MOC_LITERAL(11, 121, 9) // "forgetApp"

    },
    "DBusSignalDispatcher\0D-Bus Interface\0"
    "org.corectrl.helper.pmon\0appExec\0\0"
    "data\0signature\0appExit\0sendExec\0"
    "sendExit\0watchApp\0forgetApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusSignalDispatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    2,   46,    4, 0x46 /* Public | isScriptable */,
       7,    2,   51,    4, 0x46 /* Public | isScriptable */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   56,    4, 0x0a /* Public */,
       9,    1,   59,    4, 0x0a /* Public */,
      10,    2,   62,    4, 0x4a /* Public | isScriptable */,
      11,    2,   67,    4, 0x4a /* Public | isScriptable */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,

       0        // eod
};

void DBusSignalDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusSignalDispatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appExec((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->appExit((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->sendExec((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->sendExit((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->watchApp((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->forgetApp((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusSignalDispatcher::*)(QByteArray const & , QByteArray const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusSignalDispatcher::appExec)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusSignalDispatcher::*)(QByteArray const & , QByteArray const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusSignalDispatcher::appExit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DBusSignalDispatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DBusSignalDispatcher.data,
    qt_meta_data_DBusSignalDispatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusSignalDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusSignalDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusSignalDispatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DBusSignalDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DBusSignalDispatcher::appExec(QByteArray const & _t1, QByteArray const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusSignalDispatcher::appExit(QByteArray const & _t1, QByteArray const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MsgDispatcher_t {
    QByteArrayData data[5];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MsgDispatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MsgDispatcher_t qt_meta_stringdata_MsgDispatcher = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MsgDispatcher"
QT_MOC_LITERAL(1, 14, 7), // "appExec"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "data"
QT_MOC_LITERAL(4, 28, 7) // "appExit"

    },
    "MsgDispatcher\0appExec\0\0data\0appExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MsgDispatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void MsgDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MsgDispatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appExec((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->appExit((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MsgDispatcher::*)(QByteArray const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgDispatcher::appExec)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MsgDispatcher::*)(QByteArray const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgDispatcher::appExit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MsgDispatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MsgDispatcher.data,
    qt_meta_data_MsgDispatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MsgDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MsgDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MsgDispatcher.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPMonMsgDispatcher"))
        return static_cast< IPMonMsgDispatcher*>(this);
    return QObject::qt_metacast(_clname);
}

int MsgDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MsgDispatcher::appExec(QByteArray const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgDispatcher::appExit(QByteArray const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
