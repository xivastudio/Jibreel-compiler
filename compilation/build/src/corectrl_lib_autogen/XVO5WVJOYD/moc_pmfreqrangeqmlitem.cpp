/****************************************************************************
** Meta object code from reading C++ file 'pmfreqrangeqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/pm/advanced/overdrive/freqrange/pmfreqrangeqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmfreqrangeqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__PMFreqRangeQMLItem_t {
    QByteArrayData data[14];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__PMFreqRangeQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__PMFreqRangeQMLItem_t qt_meta_stringdata_AMD__PMFreqRangeQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AMD::PMFreqRangeQMLItem"
QT_MOC_LITERAL(1, 24, 19), // "controlLabelChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "label"
QT_MOC_LITERAL(4, 51, 17), // "stateRangeChanged"
QT_MOC_LITERAL(5, 69, 3), // "min"
QT_MOC_LITERAL(6, 73, 3), // "max"
QT_MOC_LITERAL(7, 77, 13), // "statesChanged"
QT_MOC_LITERAL(8, 91, 6), // "states"
QT_MOC_LITERAL(9, 98, 12), // "stateChanged"
QT_MOC_LITERAL(10, 111, 5), // "index"
QT_MOC_LITERAL(11, 117, 4), // "freq"
QT_MOC_LITERAL(12, 122, 11), // "changeState"
QT_MOC_LITERAL(13, 134, 10) // "instanceID"

    },
    "AMD::PMFreqRangeQMLItem\0controlLabelChanged\0"
    "\0label\0stateRangeChanged\0min\0max\0"
    "statesChanged\0states\0stateChanged\0"
    "index\0freq\0changeState\0instanceID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__PMFreqRangeQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,
       9,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QVariantList,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095001,

       0        // eod
};

void AMD::PMFreqRangeQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PMFreqRangeQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->controlLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stateRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->statesChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->changeState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PMFreqRangeQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqRangeQMLItem::controlLabelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PMFreqRangeQMLItem::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqRangeQMLItem::stateRangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PMFreqRangeQMLItem::*)(QVariantList const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqRangeQMLItem::statesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PMFreqRangeQMLItem::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqRangeQMLItem::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PMFreqRangeQMLItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->instanceID(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AMD::PMFreqRangeQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__PMFreqRangeQMLItem.data,
    qt_meta_data_AMD__PMFreqRangeQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::PMFreqRangeQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::PMFreqRangeQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__PMFreqRangeQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::PMFreqRangeProfilePart::Importer"))
        return static_cast< AMD::PMFreqRangeProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::PMFreqRangeProfilePart::Exporter"))
        return static_cast< AMD::PMFreqRangeProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::PMFreqRangeQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AMD::PMFreqRangeQMLItem::controlLabelChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::PMFreqRangeQMLItem::stateRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::PMFreqRangeQMLItem::statesChanged(QVariantList const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AMD::PMFreqRangeQMLItem::stateChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
