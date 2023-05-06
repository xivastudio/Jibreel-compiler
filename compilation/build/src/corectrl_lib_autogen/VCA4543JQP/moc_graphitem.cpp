/****************************************************************************
** Meta object code from reading C++ file 'graphitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/sensors/graphitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphItem_t {
    QByteArrayData data[26];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphItem_t qt_meta_stringdata_GraphItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GraphItem"
QT_MOC_LITERAL(1, 10, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "nameChanged"
QT_MOC_LITERAL(4, 39, 12), // "valueChanged"
QT_MOC_LITERAL(5, 52, 5), // "value"
QT_MOC_LITERAL(6, 58, 13), // "activeChanged"
QT_MOC_LITERAL(7, 72, 6), // "active"
QT_MOC_LITERAL(8, 79, 12), // "colorChanged"
QT_MOC_LITERAL(9, 92, 5), // "color"
QT_MOC_LITERAL(10, 98, 14), // "ignoredChanged"
QT_MOC_LITERAL(11, 113, 7), // "ignored"
QT_MOC_LITERAL(12, 121, 17), // "yAxisRangeChanged"
QT_MOC_LITERAL(13, 139, 3), // "min"
QT_MOC_LITERAL(14, 143, 3), // "max"
QT_MOC_LITERAL(15, 147, 9), // "configure"
QT_MOC_LITERAL(16, 157, 16), // "QAbstractSeries*"
QT_MOC_LITERAL(17, 174, 6), // "series"
QT_MOC_LITERAL(18, 181, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(19, 196, 5), // "xAxis"
QT_MOC_LITERAL(20, 202, 5), // "yAxis"
QT_MOC_LITERAL(21, 208, 16), // "updateYAxisRange"
QT_MOC_LITERAL(22, 225, 18), // "refreshSeriePoints"
QT_MOC_LITERAL(23, 244, 6), // "update"
QT_MOC_LITERAL(24, 251, 4), // "name"
QT_MOC_LITERAL(25, 256, 4) // "unit"

    },
    "GraphItem\0settingsChanged\0\0nameChanged\0"
    "valueChanged\0value\0activeChanged\0"
    "active\0colorChanged\0color\0ignoredChanged\0"
    "ignored\0yAxisRangeChanged\0min\0max\0"
    "configure\0QAbstractSeries*\0series\0"
    "QAbstractAxis*\0xAxis\0yAxis\0updateYAxisRange\0"
    "refreshSeriePoints\0update\0name\0unit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       6,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,
      10,    1,   80,    2, 0x06 /* Public */,
      12,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    3,   88,    2, 0x0a /* Public */,
      21,    2,   95,    2, 0x0a /* Public */,
      22,    0,  100,    2, 0x0a /* Public */,
      23,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 18,   17,   19,   20,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::QString, 0x00495001,
       5, QMetaType::QReal, 0x00495001,
       7, QMetaType::Bool, 0x00495003,
      11, QMetaType::Bool, 0x00495003,
      25, QMetaType::QString, 0x00095001,
       9, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       1,
       2,
       3,
       5,
       0,
       0,

       0        // eod
};

void GraphItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->valueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->colorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ignoredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->yAxisRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 7: _t->configure((*reinterpret_cast< QAbstractSeries*(*)>(_a[1])),(*reinterpret_cast< QAbstractAxis*(*)>(_a[2])),(*reinterpret_cast< QAbstractAxis*(*)>(_a[3]))); break;
        case 8: _t->updateYAxisRange((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: _t->refreshSeriePoints(); break;
        case 10: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::settingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::valueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::activeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::colorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::ignoredChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GraphItem::*)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphItem::yAxisRangeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GraphItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->ignored(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->unit(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GraphItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->active(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->ignored(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GraphItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_GraphItem.data,
    qt_meta_data_GraphItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GraphItemProfilePart::Importer"))
        return static_cast< GraphItemProfilePart::Importer*>(this);
    if (!strcmp(_clname, "GraphItemProfilePart::Exporter"))
        return static_cast< GraphItemProfilePart::Exporter*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int GraphItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GraphItem::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GraphItem::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GraphItem::valueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphItem::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphItem::colorChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphItem::ignoredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GraphItem::yAxisRangeChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
