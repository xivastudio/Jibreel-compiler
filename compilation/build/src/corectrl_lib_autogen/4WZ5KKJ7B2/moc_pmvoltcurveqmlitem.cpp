/****************************************************************************
** Meta object code from reading C++ file 'pmvoltcurveqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/pm/advanced/overdrive/voltcurve/pmvoltcurveqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmvoltcurveqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__PMVoltCurveQMLItem_t {
    QByteArrayData data[15];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__PMVoltCurveQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__PMVoltCurveQMLItem_t qt_meta_stringdata_AMD__PMVoltCurveQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AMD::PMVoltCurveQMLItem"
QT_MOC_LITERAL(1, 24, 11), // "modeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "mode"
QT_MOC_LITERAL(4, 42, 18), // "pointsRangeChanged"
QT_MOC_LITERAL(5, 61, 7), // "freqMin"
QT_MOC_LITERAL(6, 69, 7), // "freqMax"
QT_MOC_LITERAL(7, 77, 7), // "voltMin"
QT_MOC_LITERAL(8, 85, 7), // "voltMax"
QT_MOC_LITERAL(9, 93, 13), // "pointsChanged"
QT_MOC_LITERAL(10, 107, 6), // "points"
QT_MOC_LITERAL(11, 114, 10), // "changeMode"
QT_MOC_LITERAL(12, 125, 11), // "updatePoint"
QT_MOC_LITERAL(13, 137, 8), // "oldPoint"
QT_MOC_LITERAL(14, 146, 8) // "newPoint"

    },
    "AMD::PMVoltCurveQMLItem\0modeChanged\0"
    "\0mode\0pointsRangeChanged\0freqMin\0"
    "freqMax\0voltMin\0voltMax\0pointsChanged\0"
    "points\0changeMode\0updatePoint\0oldPoint\0"
    "newPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__PMVoltCurveQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    4,   42,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   54,    2, 0x0a /* Public */,
      12,    2,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QVariantList,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   13,   14,

       0        // eod
};

void AMD::PMVoltCurveQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PMVoltCurveQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pointsRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->pointsChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 3: _t->changeMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updatePoint((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PMVoltCurveQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMVoltCurveQMLItem::modeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PMVoltCurveQMLItem::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMVoltCurveQMLItem::pointsRangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PMVoltCurveQMLItem::*)(QVariantList const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMVoltCurveQMLItem::pointsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AMD::PMVoltCurveQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__PMVoltCurveQMLItem.data,
    qt_meta_data_AMD__PMVoltCurveQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::PMVoltCurveQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::PMVoltCurveQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__PMVoltCurveQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::PMVoltCurveProfilePart::Importer"))
        return static_cast< AMD::PMVoltCurveProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::PMVoltCurveProfilePart::Exporter"))
        return static_cast< AMD::PMVoltCurveProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::PMVoltCurveQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void AMD::PMVoltCurveQMLItem::modeChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::PMVoltCurveQMLItem::pointsRangeChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::PMVoltCurveQMLItem::pointsChanged(QVariantList const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
