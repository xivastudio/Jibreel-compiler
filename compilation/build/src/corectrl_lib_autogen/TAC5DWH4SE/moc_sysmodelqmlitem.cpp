/****************************************************************************
** Meta object code from reading C++ file 'sysmodelqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/sysmodelqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sysmodelqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SysModelQMLItem_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SysModelQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SysModelQMLItem_t qt_meta_stringdata_SysModelQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SysModelQMLItem"

    },
    "SysModelQMLItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SysModelQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SysModelQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SysModelQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_SysModelQMLItem.data,
    qt_meta_data_SysModelQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SysModelQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SysModelQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SysModelQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ISysModelUI"))
        return static_cast< ISysModelUI*>(this);
    return QMLItem::qt_metacast(_clname);
}

int SysModelQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
