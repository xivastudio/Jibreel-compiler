/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/app/systray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SysTray_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SysTray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SysTray_t qt_meta_stringdata_SysTray = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SysTray"
QT_MOC_LITERAL(1, 8, 9), // "activated"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "quit"
QT_MOC_LITERAL(4, 24, 21), // "showMainWindowToggled"
QT_MOC_LITERAL(5, 46, 7), // "visible"
QT_MOC_LITERAL(6, 54, 4), // "show"
QT_MOC_LITERAL(7, 59, 4), // "hide"
QT_MOC_LITERAL(8, 64, 14), // "settingChanged"
QT_MOC_LITERAL(9, 79, 3), // "key"
QT_MOC_LITERAL(10, 83, 5), // "value"
QT_MOC_LITERAL(11, 89, 26), // "onMainWindowVisibleChanged"
QT_MOC_LITERAL(12, 116, 9), // "isVisible"
QT_MOC_LITERAL(13, 126, 19), // "onTrayIconActivated"
QT_MOC_LITERAL(14, 146, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(15, 180, 6), // "reason"
QT_MOC_LITERAL(16, 187, 31), // "onShowMainWindowActionTriggered"
QT_MOC_LITERAL(17, 219, 11) // "isAvailable"

    },
    "SysTray\0activated\0\0quit\0showMainWindowToggled\0"
    "visible\0show\0hide\0settingChanged\0key\0"
    "value\0onMainWindowVisibleChanged\0"
    "isVisible\0onTrayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0onShowMainWindowActionTriggered\0"
    "isAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SysTray[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    2,   76,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    0,   88,    2, 0x02 /* Public */,
      12,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void SysTray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SysTray *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->quit(); break;
        case 2: _t->showMainWindowToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->show(); break;
        case 4: _t->hide(); break;
        case 5: _t->settingChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->onMainWindowVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onTrayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 8: _t->onShowMainWindowActionTriggered(); break;
        case 9: { bool _r = _t->isAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SysTray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SysTray::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SysTray::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SysTray::quit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SysTray::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SysTray::showMainWindowToggled)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SysTray::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SysTray.data,
    qt_meta_data_SysTray,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SysTray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SysTray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SysTray.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SysTray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SysTray::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SysTray::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SysTray::showMainWindowToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
