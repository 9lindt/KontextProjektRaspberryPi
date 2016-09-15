/****************************************************************************
** Meta object code from reading C++ file 'foodbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "foodbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foodbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FoodBox_t {
    QByteArrayData data[18];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FoodBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FoodBox_t qt_meta_stringdata_FoodBox = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FoodBox"
QT_MOC_LITERAL(1, 8, 17), // "helloWorldChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "stateChanged"
QT_MOC_LITERAL(4, 40, 16), // "FoodBoxStateEnum"
QT_MOC_LITERAL(5, 57, 5), // "state"
QT_MOC_LITERAL(6, 63, 15), // "watchersChanged"
QT_MOC_LITERAL(7, 79, 35), // "QQmlListProperty<BackgroundPr..."
QT_MOC_LITERAL(8, 115, 8), // "watchers"
QT_MOC_LITERAL(9, 124, 8), // "setState"
QT_MOC_LITERAL(10, 133, 10), // "addWatcher"
QT_MOC_LITERAL(11, 144, 18), // "BackgroundProcess*"
QT_MOC_LITERAL(12, 163, 7), // "watcher"
QT_MOC_LITERAL(13, 171, 13), // "removeWatcher"
QT_MOC_LITERAL(14, 185, 10), // "helloWorld"
QT_MOC_LITERAL(15, 196, 4), // "OPEN"
QT_MOC_LITERAL(16, 201, 6), // "CLOSED"
QT_MOC_LITERAL(17, 208, 10) // "PROCESSING"

    },
    "FoodBox\0helloWorldChanged\0\0stateChanged\0"
    "FoodBoxStateEnum\0state\0watchersChanged\0"
    "QQmlListProperty<BackgroundProcess>\0"
    "watchers\0setState\0addWatcher\0"
    "BackgroundProcess*\0watcher\0removeWatcher\0"
    "helloWorld\0OPEN\0CLOSED\0PROCESSING"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FoodBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   60, // properties
       1,   72, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   51,    2, 0x0a /* Public */,
      10,    1,   54,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495103,
       5, 0x80000000 | 4, 0x0049510b,
       8, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       4, 0x0,    3,   76,

 // enum data: key, value
      15, uint(FoodBox::OPEN),
      16, uint(FoodBox::CLOSED),
      17, uint(FoodBox::PROCESSING),

       0        // eod
};

void FoodBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FoodBox *_t = static_cast<FoodBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->helloWorldChanged(); break;
        case 1: _t->stateChanged((*reinterpret_cast< FoodBoxStateEnum(*)>(_a[1]))); break;
        case 2: _t->watchersChanged((*reinterpret_cast< QQmlListProperty<BackgroundProcess>(*)>(_a[1]))); break;
        case 3: _t->setState((*reinterpret_cast< FoodBoxStateEnum(*)>(_a[1]))); break;
        case 4: _t->addWatcher((*reinterpret_cast< BackgroundProcess*(*)>(_a[1]))); break;
        case 5: _t->removeWatcher((*reinterpret_cast< BackgroundProcess*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BackgroundProcess* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BackgroundProcess* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FoodBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoodBox::helloWorldChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FoodBox::*_t)(FoodBoxStateEnum );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoodBox::stateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FoodBox::*_t)(QQmlListProperty<BackgroundProcess> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoodBox::watchersChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FoodBox *_t = static_cast<FoodBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->helloWorld(); break;
        case 1: *reinterpret_cast< FoodBoxStateEnum*>(_v) = _t->state(); break;
        case 2: *reinterpret_cast< QQmlListProperty<BackgroundProcess>*>(_v) = _t->watchers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FoodBox *_t = static_cast<FoodBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHelloWorld(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setState(*reinterpret_cast< FoodBoxStateEnum*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FoodBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FoodBox.data,
      qt_meta_data_FoodBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FoodBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoodBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FoodBox.stringdata0))
        return static_cast<void*>(const_cast< FoodBox*>(this));
    return QObject::qt_metacast(_clname);
}

int FoodBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FoodBox::helloWorldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FoodBox::stateChanged(FoodBoxStateEnum _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FoodBox::watchersChanged(QQmlListProperty<BackgroundProcess> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
