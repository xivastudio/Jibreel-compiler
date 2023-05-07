/****************************************************************************
** Meta object code from reading C++ file 'controlmodeqmlitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/core/components/controls/controlmodeqmlitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlmodeqmlitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlModeQMLItem_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlModeQMLItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlModeQMLItem_t qt_meta_stringdata_ControlModeQMLItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ControlModeQMLItem"
QT_MOC_LITERAL(1, 19, 11), // "modeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "mode"
QT_MOC_LITERAL(4, 37, 12), // "modesChanged"
QT_MOC_LITERAL(5, 50, 14), // "QList<QString>"
QT_MOC_LITERAL(6, 65, 5), // "modes"
QT_MOC_LITERAL(7, 71, 10) // "changeMode"

    },
    "ControlModeQMLItem\0modeChanged\0\0mode\0"
    "modesChanged\0QList<QString>\0modes\0"
    "changeMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlModeQMLItem[] = {

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

void ControlModeQMLItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlModeQMLItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->modesChanged((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 2: _t->changeMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
            using _t = void (ControlModeQMLItem::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlModeQMLItem::modeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControlModeQMLItem::*)(QList<QString> const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlModeQMLItem::modesChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlModeQMLItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMLItem::staticMetaObject>(),
    qt_meta_stringdata_ControlModeQMLItem.data,
    qt_meta_data_ControlModeQMLItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlModeQMLItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlModeQMLItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlModeQMLItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ControlModeProfilePart::Importer"))
        return static_cast< ControlModeProfilePart::Importer*>(this);
    if (!strcmp(_clname, "ControlModeProfilePart::Exporter"))
        return static_cast< ControlModeProfilePart::Exporter*>(this);
    return QMLItem::qt_metacast(_clname);
}

int ControlModeQMLItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ControlModeQMLItem::modeChanged(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControlModeQMLItem::modesChanged(QList<QString> const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
