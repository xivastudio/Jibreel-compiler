/****************************************************************************
** Meta object code from reading C++ file 'fanfixedqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/fan/fixed/fanfixedqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fanfixedqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__FanFixedQMLItem_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__FanFixedQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__FanFixedQMLItem_t qt_meta_stringdata_AMD__FanFixedQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AMD::FanFixedQMLItem"
QT_MOC_LITERAL(1, 21, 12), // "valueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 14), // "fanStopChanged"
QT_MOC_LITERAL(5, 56, 7), // "enabled"
QT_MOC_LITERAL(6, 64, 20), // "fanStartValueChanged"
QT_MOC_LITERAL(7, 85, 11), // "changeValue"
QT_MOC_LITERAL(8, 97, 13), // "enableFanStop"
QT_MOC_LITERAL(9, 111, 19) // "changeFanStartValue"

    },
    "AMD::FanFixedQMLItem\0valueChanged\0\0"
    "value\0fanStopChanged\0enabled\0"
    "fanStartValueChanged\0changeValue\0"
    "enableFanStop\0changeFanStartValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__FanFixedQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void AMD::FanFixedQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FanFixedQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fanStopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->fanStartValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->enableFanStop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->changeFanStartValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FanFixedQMLItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanFixedQMLItem::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FanFixedQMLItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanFixedQMLItem::fanStopChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FanFixedQMLItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanFixedQMLItem::fanStartValueChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AMD::FanFixedQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__FanFixedQMLItem.data,
    qt_meta_data_AMD__FanFixedQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::FanFixedQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::FanFixedQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__FanFixedQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::FanFixedProfilePart::Importer"))
        return static_cast< AMD::FanFixedProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::FanFixedProfilePart::Exporter"))
        return static_cast< AMD::FanFixedProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::FanFixedQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
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
void AMD::FanFixedQMLItem::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::FanFixedQMLItem::fanStopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::FanFixedQMLItem::fanStartValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
