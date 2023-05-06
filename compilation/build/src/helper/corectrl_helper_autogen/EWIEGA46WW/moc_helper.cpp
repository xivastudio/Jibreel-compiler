/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/helper/helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Helper_t {
    QByteArrayData data[16];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Helper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Helper_t qt_meta_stringdata_Helper = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Helper"
QT_MOC_LITERAL(1, 7, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 23, 19), // "org.corectrl.helper"
QT_MOC_LITERAL(3, 43, 5), // "start"
QT_MOC_LITERAL(4, 49, 12), // "QDBusVariant"
QT_MOC_LITERAL(5, 62, 0), // ""
QT_MOC_LITERAL(6, 63, 12), // "appPublicKey"
QT_MOC_LITERAL(7, 76, 15), // "autoExitTimeout"
QT_MOC_LITERAL(8, 92, 12), // "QDBusMessage"
QT_MOC_LITERAL(9, 105, 7), // "message"
QT_MOC_LITERAL(10, 113, 7), // "started"
QT_MOC_LITERAL(11, 121, 4), // "exit"
QT_MOC_LITERAL(12, 126, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(13, 136, 9), // "signature"
QT_MOC_LITERAL(14, 146, 13), // "delayAutoExit"
QT_MOC_LITERAL(15, 160, 10) // "exitHelper"

    },
    "Helper\0D-Bus Interface\0org.corectrl.helper\0"
    "start\0QDBusVariant\0\0appPublicKey\0"
    "autoExitTimeout\0QDBusMessage\0message\0"
    "started\0exit\0Q_NOREPLY\0signature\0"
    "delayAutoExit\0exitHelper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Helper[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    3,   46,    5, 0x0a /* Public */,
      10,    0,   53,    5, 0x0a /* Public */,
      11,    1,   54,   12, 0x0a /* Public */,
      14,    0,   57,   12, 0x0a /* Public */,
      15,    0,   58,    5, 0x08 /* Private */,
       7,    0,   59,    5, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 4, QMetaType::QByteArray, QMetaType::Int, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Helper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QDBusVariant _r = _t->start((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->started();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->exit((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->delayAutoExit(); break;
        case 4: _t->exitHelper(); break;
        case 5: _t->autoExitTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Helper::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_Helper.data,
    qt_meta_data_Helper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Helper.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
