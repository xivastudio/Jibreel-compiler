/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/app/app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppInfo_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppInfo_t qt_meta_stringdata_AppInfo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AppInfo"
QT_MOC_LITERAL(1, 8, 4), // "name"
QT_MOC_LITERAL(2, 13, 7) // "version"

    },
    "AppInfo\0name\0version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,

       0        // eod
};

void AppInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AppInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AppInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppInfo.data,
    qt_meta_data_AppInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_App_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_App_t qt_meta_stringdata_App = {
    {
QT_MOC_LITERAL(0, 0, 3), // "App"
QT_MOC_LITERAL(1, 4, 4), // "exit"
QT_MOC_LITERAL(2, 9, 0), // ""
QT_MOC_LITERAL(3, 10, 14), // "showMainWindow"
QT_MOC_LITERAL(4, 25, 4), // "show"
QT_MOC_LITERAL(5, 30, 13), // "onNewInstance"
QT_MOC_LITERAL(6, 44, 4), // "args"
QT_MOC_LITERAL(7, 49, 18), // "onSysTrayActivated"
QT_MOC_LITERAL(8, 68, 16), // "onSettingChanged"
QT_MOC_LITERAL(9, 85, 3), // "key"
QT_MOC_LITERAL(10, 89, 5), // "value"
QT_MOC_LITERAL(11, 95, 22) // "saveMainWindowGeometry"

    },
    "App\0exit\0\0showMainWindow\0show\0"
    "onNewInstance\0args\0onSysTrayActivated\0"
    "onSettingChanged\0key\0value\0"
    "saveMainWindowGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_App[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    2,   52,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    9,   10,
    QMetaType::Void,

       0        // eod
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<App *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exit(); break;
        case 1: _t->showMainWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onNewInstance((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->onSysTrayActivated(); break;
        case 4: _t->onSettingChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->saveMainWindowGeometry(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject App::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_App.data,
    qt_meta_data_App,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_App.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
