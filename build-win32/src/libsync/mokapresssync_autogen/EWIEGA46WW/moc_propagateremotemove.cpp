/****************************************************************************
** Meta object code from reading C++ file 'propagateremotemove.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/propagateremotemove.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateremotemove.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__MoveJob_t {
    QByteArrayData data[3];
    char stringdata[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__MoveJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__MoveJob_t qt_meta_stringdata_OCC__MoveJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OCC::MoveJob"
QT_MOC_LITERAL(1, 13, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "OCC::MoveJob\0finishedSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__MoveJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::MoveJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MoveJob *_t = static_cast<MoveJob *>(_o);
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MoveJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MoveJob::finishedSignal)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::MoveJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__MoveJob.data,
      qt_meta_data_OCC__MoveJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::MoveJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::MoveJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__MoveJob.stringdata))
        return static_cast<void*>(const_cast< MoveJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::MoveJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::MoveJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__PropagateRemoteMove_t {
    QByteArrayData data[4];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateRemoteMove_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateRemoteMove_t qt_meta_stringdata_OCC__PropagateRemoteMove = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::PropagateRemoteMove"
QT_MOC_LITERAL(1, 25, 19), // "slotMoveJobFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8) // "finalize"

    },
    "OCC::PropagateRemoteMove\0slotMoveJobFinished\0"
    "\0finalize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateRemoteMove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateRemoteMove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateRemoteMove *_t = static_cast<PropagateRemoteMove *>(_o);
        switch (_id) {
        case 0: _t->slotMoveJobFinished(); break;
        case 1: _t->finalize(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::PropagateRemoteMove::staticMetaObject = {
    { &PropagateItemJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateRemoteMove.data,
      qt_meta_data_OCC__PropagateRemoteMove,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateRemoteMove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateRemoteMove::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateRemoteMove.stringdata))
        return static_cast<void*>(const_cast< PropagateRemoteMove*>(this));
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateRemoteMove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
