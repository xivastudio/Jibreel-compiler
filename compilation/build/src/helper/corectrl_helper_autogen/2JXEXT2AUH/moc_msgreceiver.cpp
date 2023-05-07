/****************************************************************************
** Meta object code from reading C++ file 'msgreceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/helper/sysctl/msgreceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgreceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MsgReceiver_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MsgReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MsgReceiver_t qt_meta_stringdata_MsgReceiver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MsgReceiver"
QT_MOC_LITERAL(1, 12, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 28, 26), // "org.corectrl.helper.sysctl"
QT_MOC_LITERAL(3, 55, 5), // "apply"
QT_MOC_LITERAL(4, 61, 0), // ""
QT_MOC_LITERAL(5, 62, 4), // "data"
QT_MOC_LITERAL(6, 67, 9) // "signature"

    },
    "MsgReceiver\0D-Bus Interface\0"
    "org.corectrl.helper.sysctl\0apply\0\0"
    "data\0signature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MsgReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    2,   21,    4, 0x4a /* Public | isScriptable */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,

       0        // eod
};

void MsgReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MsgReceiver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MsgReceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MsgReceiver.data,
    qt_meta_data_MsgReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MsgReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MsgReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MsgReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MsgReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
