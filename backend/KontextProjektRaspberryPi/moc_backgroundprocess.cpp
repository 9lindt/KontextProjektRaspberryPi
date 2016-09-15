/****************************************************************************
** Meta object code from reading C++ file 'backgroundprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "backgroundprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BackgroundProcess_t {
    QByteArrayData data[20];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BackgroundProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BackgroundProcess_t qt_meta_stringdata_BackgroundProcess = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BackgroundProcess"
QT_MOC_LITERAL(1, 18, 12), // "stateChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 31), // "BackgroundProcess::ProcessState"
QT_MOC_LITERAL(4, 64, 5), // "state"
QT_MOC_LITERAL(5, 70, 16), // "conditionChanged"
QT_MOC_LITERAL(6, 87, 35), // "BackgroundProcess::ProcessCon..."
QT_MOC_LITERAL(7, 123, 9), // "condition"
QT_MOC_LITERAL(8, 133, 8), // "setState"
QT_MOC_LITERAL(9, 142, 12), // "ProcessState"
QT_MOC_LITERAL(10, 155, 12), // "setCondition"
QT_MOC_LITERAL(11, 168, 16), // "ProcessCondition"
QT_MOC_LITERAL(12, 185, 15), // "UNDEFINED_STATE"
QT_MOC_LITERAL(13, 201, 8), // "STARTING"
QT_MOC_LITERAL(14, 210, 7), // "RUNNING"
QT_MOC_LITERAL(15, 218, 9), // "FINISHING"
QT_MOC_LITERAL(16, 228, 19), // "UNDEFINED_CONDITION"
QT_MOC_LITERAL(17, 248, 5), // "GREEN"
QT_MOC_LITERAL(18, 254, 6), // "ORANGE"
QT_MOC_LITERAL(19, 261, 3) // "RED"

    },
    "BackgroundProcess\0stateChanged\0\0"
    "BackgroundProcess::ProcessState\0state\0"
    "conditionChanged\0BackgroundProcess::ProcessCondition\0"
    "condition\0setState\0ProcessState\0"
    "setCondition\0ProcessCondition\0"
    "UNDEFINED_STATE\0STARTING\0RUNNING\0"
    "FINISHING\0UNDEFINED_CONDITION\0GREEN\0"
    "ORANGE\0RED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackgroundProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x0a /* Public */,
      10,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11,    7,

 // properties: name, type, flags
       4, 0x80000000 | 9, 0x0049510b,
       7, 0x80000000 | 11, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       9, 0x0,    4,   62,
      11, 0x0,    4,   70,

 // enum data: key, value
      12, uint(BackgroundProcess::UNDEFINED_STATE),
      13, uint(BackgroundProcess::STARTING),
      14, uint(BackgroundProcess::RUNNING),
      15, uint(BackgroundProcess::FINISHING),
      16, uint(BackgroundProcess::UNDEFINED_CONDITION),
      17, uint(BackgroundProcess::GREEN),
      18, uint(BackgroundProcess::ORANGE),
      19, uint(BackgroundProcess::RED),

       0        // eod
};

void BackgroundProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BackgroundProcess *_t = static_cast<BackgroundProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< BackgroundProcess::ProcessState(*)>(_a[1]))); break;
        case 1: _t->conditionChanged((*reinterpret_cast< BackgroundProcess::ProcessCondition(*)>(_a[1]))); break;
        case 2: _t->setState((*reinterpret_cast< ProcessState(*)>(_a[1]))); break;
        case 3: _t->setCondition((*reinterpret_cast< ProcessCondition(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BackgroundProcess::*_t)(BackgroundProcess::ProcessState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BackgroundProcess::stateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (BackgroundProcess::*_t)(BackgroundProcess::ProcessCondition );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BackgroundProcess::conditionChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BackgroundProcess *_t = static_cast<BackgroundProcess *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ProcessState*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< ProcessCondition*>(_v) = _t->condition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BackgroundProcess *_t = static_cast<BackgroundProcess *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setState(*reinterpret_cast< ProcessState*>(_v)); break;
        case 1: _t->setCondition(*reinterpret_cast< ProcessCondition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BackgroundProcess::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BackgroundProcess.data,
      qt_meta_data_BackgroundProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BackgroundProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackgroundProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundProcess.stringdata0))
        return static_cast<void*>(const_cast< BackgroundProcess*>(this));
    return QThread::qt_metacast(_clname);
}

int BackgroundProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void BackgroundProcess::stateChanged(BackgroundProcess::ProcessState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BackgroundProcess::conditionChanged(BackgroundProcess::ProcessCondition _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
