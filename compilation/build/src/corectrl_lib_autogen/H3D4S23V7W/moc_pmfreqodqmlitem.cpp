/****************************************************************************
** Meta object code from reading C++ file 'pmfreqodqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/amd/pm/advanced/overclock/freqod/pmfreqodqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmfreqodqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AMD__PMFreqOdQMLItem_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AMD__PMFreqOdQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AMD__PMFreqOdQMLItem_t qt_meta_stringdata_AMD__PMFreqOdQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AMD::PMFreqOdQMLItem"
QT_MOC_LITERAL(1, 21, 13), // "sclkOdChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 13), // "mclkOdChanged"
QT_MOC_LITERAL(5, 56, 11), // "sclkChanged"
QT_MOC_LITERAL(6, 68, 11), // "mclkChanged"
QT_MOC_LITERAL(7, 80, 12), // "changeSclkOd"
QT_MOC_LITERAL(8, 93, 12) // "changeMclkOd"

    },
    "AMD::PMFreqOdQMLItem\0sclkOdChanged\0\0"
    "value\0mclkOdChanged\0sclkChanged\0"
    "mclkChanged\0changeSclkOd\0changeMclkOd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMD__PMFreqOdQMLItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void AMD::PMFreqOdQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PMFreqOdQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sclkOdChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->mclkOdChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->sclkChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mclkChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->changeSclkOd((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->changeMclkOd((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PMFreqOdQMLItem::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqOdQMLItem::sclkOdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PMFreqOdQMLItem::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqOdQMLItem::mclkOdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PMFreqOdQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqOdQMLItem::sclkChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PMFreqOdQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PMFreqOdQMLItem::mclkChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AMD::PMFreqOdQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_AMD__PMFreqOdQMLItem.data,
    qt_meta_data_AMD__PMFreqOdQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AMD::PMFreqOdQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMD::PMFreqOdQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AMD__PMFreqOdQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AMD::PMFreqOdProfilePart::Importer"))
        return static_cast< AMD::PMFreqOdProfilePart::Importer*>(this);
    if (!strcmp(_clname, "AMD::PMFreqOdProfilePart::Exporter"))
        return static_cast< AMD::PMFreqOdProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int AMD::PMFreqOdQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AMD::PMFreqOdQMLItem::sclkOdChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMD::PMFreqOdQMLItem::mclkOdChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMD::PMFreqOdQMLItem::sclkChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AMD::PMFreqOdQMLItem::mclkChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
