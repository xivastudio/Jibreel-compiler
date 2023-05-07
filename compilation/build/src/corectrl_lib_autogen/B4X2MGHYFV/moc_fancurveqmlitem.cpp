/****************************************************************************
** Meta object code from reading C++ file 'fancurveqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/fan/curve/fancurveqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancurveqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__FanCurveQMLItem_t {
    QByteArrayData data[20];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__FanCurveQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__FanCurveQMLItem_t qt_meta_stringdata_AMD__FanCurveQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AMD::FanCurveQMLItem"
QT_MOC_LITERAL(1, 21, 12), // "curveChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "points"
QT_MOC_LITERAL(4, 42, 14), // "fanStopChanged"
QT_MOC_LITERAL(5, 57, 7), // "enabled"
QT_MOC_LITERAL(6, 65, 20), // "fanStartValueChanged"
QT_MOC_LITERAL(7, 86, 5), // "value"
QT_MOC_LITERAL(8, 92, 23), // "temperatureRangeChanged"
QT_MOC_LITERAL(9, 116, 3), // "min"
QT_MOC_LITERAL(10, 120, 3), // "max"
QT_MOC_LITERAL(11, 124, 13), // "enableFanStop"
QT_MOC_LITERAL(12, 138, 19), // "changeFanStartValue"
QT_MOC_LITERAL(13, 158, 16), // "updateCurvePoint"
QT_MOC_LITERAL(14, 175, 8), // "oldPoint"
QT_MOC_LITERAL(15, 184, 8), // "newPoint"
QT_MOC_LITERAL(16, 193, 7), // "fanStop"
QT_MOC_LITERAL(17, 201, 13), // "fanStartValue"
QT_MOC_LITERAL(18, 215, 7), // "minTemp"
QT_MOC_LITERAL(19, 223, 7) // "maxTemp"

    },
    "AMD::FanCurveQMLItem\0curveChanged\0\0"
    "points\0fanStopChanged\0enabled\0"
    "fanStartValueChanged\0value\0"
    "temperatureRangeChanged\0min\0max\0"
    "enableFanStop\0changeFanStartValue\0"
    "updateCurvePoint\0oldPoint\0newPoint\0"
    "fanStop\0fanStartValue\0minTemp\0maxTemp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__FanCurveQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    2,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   63,    2, 0x0a /* Public */,
      12,    1,   66,    2, 0x0a /* Public */,
      13,    2,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantList,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   14,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495003,
      17, QMetaType::QReal, 0x00495003,
      18, QMetaType::QReal, 0x00095001,
      19, QMetaType::QReal, 0x00095001,

 // properties: notify_signal_id
       1,
       2,
       0,
       0,

       0        // eod
};

void AMD::FanCurveQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FanCurveQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->curveChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 1: _t->fanStopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->fanStartValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->temperatureRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->enableFanStop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->changeFanStartValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->updateCurvePoint((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FanCurveQMLItem::*)(QVariantList const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanCurveQMLItem::curveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FanCurveQMLItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanCurveQMLItem::fanStopChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FanCurveQMLItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanCurveQMLItem::fanStartValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FanCurveQMLItem::*)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FanCurveQMLItem::temperatureRangeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FanCurveQMLItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->fanStop(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->fanStartValue(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->minTemp(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->maxTemp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FanCurveQMLItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->enableFanStop(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->changeFanStartValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AMD::FanCurveQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__FanCurveQMLItem.data,
    qt_meta_data_AMD__FanCurveQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::FanCurveQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::FanCurveQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__FanCurveQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::FanCurveProfilePart::Importer"))
        return static_cast< AMD::FanCurveProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::FanCurveProfilePart::Exporter"))
        return static_cast< AMD::FanCurveProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::FanCurveQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AMD::FanCurveQMLItem::curveChanged(QVariantList const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::FanCurveQMLItem::fanStopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::FanCurveQMLItem::fanStartValueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AMD::FanCurveQMLItem::temperatureRangeChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
