/****************************************************************************
** Meta object code from reading C++ file 'gpiopin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpiopin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpiopin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPIOPin_t {
    QByteArrayData data[10];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPIOPin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPIOPin_t qt_meta_stringdata_GPIOPin = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GPIOPin"
QT_MOC_LITERAL(1, 8, 9), // "onChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 2), // "on"
QT_MOC_LITERAL(4, 22, 16), // "pinNumberChanged"
QT_MOC_LITERAL(5, 39, 9), // "pinNumber"
QT_MOC_LITERAL(6, 49, 12), // "actorChanged"
QT_MOC_LITERAL(7, 62, 5), // "actor"
QT_MOC_LITERAL(8, 68, 5), // "setOn"
QT_MOC_LITERAL(9, 74, 8) // "setActor"

    },
    "GPIOPin\0onChanged\0\0on\0pinNumberChanged\0"
    "pinNumber\0actorChanged\0actor\0setOn\0"
    "setActor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPIOPin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       5, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       1,

       0        // eod
};

void GPIOPin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPIOPin *_t = static_cast<GPIOPin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pinNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->actorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setActor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPIOPin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPIOPin::onChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GPIOPin::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPIOPin::pinNumberChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GPIOPin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPIOPin::actorChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GPIOPin *_t = static_cast<GPIOPin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isOn(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->actor(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->pinNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GPIOPin *_t = static_cast<GPIOPin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOn(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setActor(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GPIOPin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPIOPin.data,
      qt_meta_data_GPIOPin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPIOPin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPIOPin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPIOPin.stringdata0))
        return static_cast<void*>(const_cast< GPIOPin*>(this));
    return QObject::qt_metacast(_clname);
}

int GPIOPin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GPIOPin::onChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPIOPin::pinNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPIOPin::actorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
