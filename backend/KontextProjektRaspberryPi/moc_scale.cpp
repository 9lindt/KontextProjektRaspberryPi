/****************************************************************************
** Meta object code from reading C++ file 'scale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReadScaleThread_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadScaleThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadScaleThread_t qt_meta_stringdata_ReadScaleThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ReadScaleThread"
QT_MOC_LITERAL(1, 16, 9), // "newWeight"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "weight"
QT_MOC_LITERAL(4, 34, 16), // "sleepTimeChanged"
QT_MOC_LITERAL(5, 51, 9), // "sleepTime"
QT_MOC_LITERAL(6, 61, 12) // "setSleepTime"

    },
    "ReadScaleThread\0newWeight\0\0weight\0"
    "sleepTimeChanged\0sleepTime\0setSleepTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadScaleThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Long,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Long,    5,

 // properties: name, type, flags
       5, QMetaType::Long, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void ReadScaleThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadScaleThread *_t = static_cast<ReadScaleThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sleepTimeChanged((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 2: _t->setSleepTime((*reinterpret_cast< long(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReadScaleThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadScaleThread::newWeight)) {
                *result = 0;
            }
        }
        {
            typedef void (ReadScaleThread::*_t)(long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadScaleThread::sleepTimeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ReadScaleThread *_t = static_cast<ReadScaleThread *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< long*>(_v) = _t->sleepTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ReadScaleThread *_t = static_cast<ReadScaleThread *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSleepTime(*reinterpret_cast< long*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ReadScaleThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ReadScaleThread.data,
      qt_meta_data_ReadScaleThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadScaleThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadScaleThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadScaleThread.stringdata0))
        return static_cast<void*>(const_cast< ReadScaleThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ReadScaleThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ReadScaleThread::newWeight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReadScaleThread::sleepTimeChanged(long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Scale_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scale_t qt_meta_stringdata_Scale = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Scale"
QT_MOC_LITERAL(1, 6, 13), // "weightChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "weight"
QT_MOC_LITERAL(4, 28, 27), // "measurementFrequencyChanged"
QT_MOC_LITERAL(5, 56, 20), // "measurementFrequency"
QT_MOC_LITERAL(6, 77, 23) // "setMeasurementFrequency"

    },
    "Scale\0weightChanged\0\0weight\0"
    "measurementFrequencyChanged\0"
    "measurementFrequency\0setMeasurementFrequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UInt,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    5,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
       5, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Scale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scale *_t = static_cast<Scale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->weightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->measurementFrequencyChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->setMeasurementFrequency((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scale::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scale::weightChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Scale::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scale::measurementFrequencyChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Scale *_t = static_cast<Scale *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->weight(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->measurementFrequency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Scale *_t = static_cast<Scale *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMeasurementFrequency(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Scale::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scale.data,
      qt_meta_data_Scale,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scale::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scale.stringdata0))
        return static_cast<void*>(const_cast< Scale*>(this));
    return QObject::qt_metacast(_clname);
}

int Scale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void Scale::weightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scale::measurementFrequencyChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
