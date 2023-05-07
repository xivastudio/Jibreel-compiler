/****************************************************************************
** Meta object code from reading C++ file 'cpufreqqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/cpu/cpufreqqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpufreqqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUFreqQMLItem_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUFreqQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUFreqQMLItem_t qt_meta_stringdata_CPUFreqQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CPUFreqQMLItem"
QT_MOC_LITERAL(1, 15, 22), // "scalingGovernorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "governor"
QT_MOC_LITERAL(4, 48, 23), // "scalingGovernorsChanged"
QT_MOC_LITERAL(5, 72, 14), // "QList<QString>"
QT_MOC_LITERAL(6, 87, 9), // "governors"
QT_MOC_LITERAL(7, 97, 21) // "changeScalingGovernor"

    },
    "CPUFreqQMLItem\0scalingGovernorChanged\0"
    "\0governor\0scalingGovernorsChanged\0"
    "QList<QString>\0governors\0changeScalingGovernor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUFreqQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CPUFreqQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUFreqQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scalingGovernorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->scalingGovernorsChanged((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 2: _t->changeScalingGovernor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CPUFreqQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUFreqQMLItem::scalingGovernorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CPUFreqQMLItem::*)(QList<QString> const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUFreqQMLItem::scalingGovernorsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUFreqQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_CPUFreqQMLItem.data,
    qt_meta_data_CPUFreqQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUFreqQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUFreqQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUFreqQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CPUFreqProfilePart::Importer"))
        return static_cast< CPUFreqProfilePart::Importer*>(this);
    if (!strcmp(_clname, "CPUFreqProfilePart::Exporter"))
        return static_cast< CPUFreqProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int CPUFreqQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMLItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CPUFreqQMLItem::scalingGovernorChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPUFreqQMLItem::scalingGovernorsChanged(QList<QString> const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
