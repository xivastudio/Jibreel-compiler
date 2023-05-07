/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/app/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 14), // "settingChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "key"
QT_MOC_LITERAL(4, 29, 5), // "value"
QT_MOC_LITERAL(5, 35, 8), // "setValue"
QT_MOC_LITERAL(6, 44, 8), // "getValue"
QT_MOC_LITERAL(7, 53, 12), // "defaultValue"
QT_MOC_LITERAL(8, 66, 13), // "setStringList"
QT_MOC_LITERAL(9, 80, 4), // "list"
QT_MOC_LITERAL(10, 85, 13), // "getStringList"
QT_MOC_LITERAL(11, 99, 11) // "defaultList"

    },
    "Settings\0settingChanged\0\0key\0value\0"
    "setValue\0getValue\0defaultValue\0"
    "setStringList\0list\0getStringList\0"
    "defaultList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   44,    2, 0x02 /* Public */,
       6,    2,   49,    2, 0x02 /* Public */,
       8,    2,   54,    2, 0x02 /* Public */,
      10,    2,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,    3,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    9,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QStringList,    3,   11,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Settings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: { QVariant _r = _t->getValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setStringList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: { QVariant _r = _t->getStringList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Settings::*)(QString const & , QVariant const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::settingChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Settings::staticMetaObject = { {
    QMetaObject::SuperData::link<QSettings::staticMetaObject>(),
    qt_meta_stringdata_Settings.data,
    qt_meta_data_Settings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(this);
    return QSettings::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSettings::qt_metacall(_c, _id, _a);
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
void Settings::settingChanged(QString const & _t1, QVariant const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
