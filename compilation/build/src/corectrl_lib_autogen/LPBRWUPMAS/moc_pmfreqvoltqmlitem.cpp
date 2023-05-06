/****************************************************************************
** Meta object code from reading C++ file 'pmfreqvoltqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/pm/advanced/overdrive/freqvolt/pmfreqvoltqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmfreqvoltqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__PMFreqVoltQMLItem_t {
    QByteArrayData data[23];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__PMFreqVoltQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__PMFreqVoltQMLItem_t qt_meta_stringdata_AMD__PMFreqVoltQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AMD::PMFreqVoltQMLItem"
QT_MOC_LITERAL(1, 23, 19), // "controlLabelChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "label"
QT_MOC_LITERAL(4, 50, 16), // "voltRangeChanged"
QT_MOC_LITERAL(5, 67, 3), // "min"
QT_MOC_LITERAL(6, 71, 3), // "max"
QT_MOC_LITERAL(7, 75, 16), // "freqRangeChanged"
QT_MOC_LITERAL(8, 92, 15), // "voltModeChanged"
QT_MOC_LITERAL(9, 108, 4), // "mode"
QT_MOC_LITERAL(10, 113, 13), // "statesChanged"
QT_MOC_LITERAL(11, 127, 6), // "states"
QT_MOC_LITERAL(12, 134, 19), // "activeStatesChanged"
QT_MOC_LITERAL(13, 154, 12), // "QVector<int>"
QT_MOC_LITERAL(14, 167, 12), // "stateChanged"
QT_MOC_LITERAL(15, 180, 5), // "index"
QT_MOC_LITERAL(16, 186, 4), // "freq"
QT_MOC_LITERAL(17, 191, 4), // "volt"
QT_MOC_LITERAL(18, 196, 14), // "changeVoltMode"
QT_MOC_LITERAL(19, 211, 11), // "changeState"
QT_MOC_LITERAL(20, 223, 17), // "changeActiveState"
QT_MOC_LITERAL(21, 241, 8), // "activate"
QT_MOC_LITERAL(22, 250, 10) // "instanceID"

    },
    "AMD::PMFreqVoltQMLItem\0controlLabelChanged\0"
    "\0label\0voltRangeChanged\0min\0max\0"
    "freqRangeChanged\0voltModeChanged\0mode\0"
    "statesChanged\0states\0activeStatesChanged\0"
    "QVector<int>\0stateChanged\0index\0freq\0"
    "volt\0changeVoltMode\0changeState\0"
    "changeActiveState\0activate\0instanceID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__PMFreqVoltQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       7,    2,   72,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,
      10,    1,   80,    2, 0x06 /* Public */,
      12,    1,   83,    2, 0x06 /* Public */,
      14,    3,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   93,    2, 0x0a /* Public */,
      19,    3,   96,    2, 0x0a /* Public */,
      20,    2,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QVariantList,   11,
    QMetaType::Void, 0x80000000 | 13,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   15,   21,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00095001,

       0        // eod
};

void AMD::PMFreqVoltQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PMFreqVoltQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->controlLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->voltRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->freqRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->voltModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->statesChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 5: _t->activeStatesChanged((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->changeVoltMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->changeState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->changeActiveState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PMFreqVoltQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::controlLabelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::voltRangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::freqRangeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::voltModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(QVariantList const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::statesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(QVector<int> const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::activeStatesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PMFreqVoltQMLItem::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqVoltQMLItem::stateChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PMFreqVoltQMLItem *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject AMD::PMFreqVoltQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__PMFreqVoltQMLItem.data,
    qt_meta_data_AMD__PMFreqVoltQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::PMFreqVoltQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::PMFreqVoltQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__PMFreqVoltQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::PMFreqVoltProfilePart::Importer"))
        return static_cast< AMD::PMFreqVoltProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::PMFreqVoltProfilePart::Exporter"))
        return static_cast< AMD::PMFreqVoltProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::PMFreqVoltQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void AMD::PMFreqVoltQMLItem::controlLabelChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::PMFreqVoltQMLItem::voltRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::PMFreqVoltQMLItem::freqRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AMD::PMFreqVoltQMLItem::voltModeChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AMD::PMFreqVoltQMLItem::statesChanged(QVariantList const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AMD::PMFreqVoltQMLItem::activeStatesChanged(QVector<int> const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AMD::PMFreqVoltQMLItem::stateChanged(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
