/****************************************************************************
** Meta object code from reading C++ file 'owncloudpropagator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/owncloudpropagator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudpropagator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__PropagatorJob_t {
    QByteArrayData data[13];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagatorJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagatorJob_t qt_meta_stringdata_OCC__PropagatorJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OCC::PropagatorJob"
QT_MOC_LITERAL(1, 19, 8), // "finished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(4, 50, 13), // "itemCompleted"
QT_MOC_LITERAL(5, 64, 12), // "SyncFileItem"
QT_MOC_LITERAL(6, 77, 13), // "PropagatorJob"
QT_MOC_LITERAL(7, 91, 5), // "ready"
QT_MOC_LITERAL(8, 97, 8), // "progress"
QT_MOC_LITERAL(9, 106, 4), // "item"
QT_MOC_LITERAL(10, 111, 5), // "bytes"
QT_MOC_LITERAL(11, 117, 5), // "abort"
QT_MOC_LITERAL(12, 123, 15) // "scheduleNextJob"

    },
    "OCC::PropagatorJob\0finished\0\0"
    "SyncFileItem::Status\0itemCompleted\0"
    "SyncFileItem\0PropagatorJob\0ready\0"
    "progress\0item\0bytes\0abort\0scheduleNextJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagatorJob[] = {

 // content:
       7,       // revision
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
       4,    2,   47,    2, 0x06 /* Public */,
       7,    0,   52,    2, 0x06 /* Public */,
       8,    2,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   58,    2, 0x0a /* Public */,
      12,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::ULongLong,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void OCC::PropagatorJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagatorJob *_t = static_cast<PropagatorJob *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1]))); break;
        case 1: _t->itemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< const PropagatorJob(*)>(_a[2]))); break;
        case 2: _t->ready(); break;
        case 3: _t->progress((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->abort(); break;
        case 5: { bool _r = _t->scheduleNextJob();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropagatorJob::*_t)(SyncFileItem::Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropagatorJob::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (PropagatorJob::*_t)(const SyncFileItem & , const PropagatorJob & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropagatorJob::itemCompleted)) {
                *result = 1;
            }
        }
        {
            typedef void (PropagatorJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropagatorJob::ready)) {
                *result = 2;
            }
        }
        {
            typedef void (PropagatorJob::*_t)(const SyncFileItem & , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropagatorJob::progress)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OCC::PropagatorJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__PropagatorJob.data,
      qt_meta_data_OCC__PropagatorJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagatorJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagatorJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagatorJob.stringdata))
        return static_cast<void*>(const_cast< PropagatorJob*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::PropagatorJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OCC::PropagatorJob::finished(SyncFileItem::Status _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropagatorJob::itemCompleted(const SyncFileItem & _t1, const PropagatorJob & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::PropagatorJob::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OCC::PropagatorJob::progress(const SyncFileItem & _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_OCC__PropagateItemJob_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateItemJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateItemJob_t qt_meta_stringdata_OCC__PropagateItemJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::PropagateItemJob"
QT_MOC_LITERAL(1, 22, 23), // "slotRestoreJobCompleted"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "SyncFileItem"
QT_MOC_LITERAL(4, 60, 5) // "start"

    },
    "OCC::PropagateItemJob\0slotRestoreJobCompleted\0"
    "\0SyncFileItem\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateItemJob[] = {

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
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateItemJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateItemJob *_t = static_cast<PropagateItemJob *>(_o);
        switch (_id) {
        case 0: _t->slotRestoreJobCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::PropagateItemJob::staticMetaObject = {
    { &PropagatorJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateItemJob.data,
      qt_meta_data_OCC__PropagateItemJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateItemJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateItemJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateItemJob.stringdata))
        return static_cast<void*>(const_cast< PropagateItemJob*>(this));
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateItemJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PropagateDirectory_t {
    QByteArrayData data[8];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateDirectory_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateDirectory_t qt_meta_stringdata_OCC__PropagateDirectory = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::PropagateDirectory"
QT_MOC_LITERAL(1, 24, 18), // "possiblyRunNextJob"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "PropagatorJob*"
QT_MOC_LITERAL(4, 59, 4), // "next"
QT_MOC_LITERAL(5, 64, 18), // "slotSubJobFinished"
QT_MOC_LITERAL(6, 83, 20), // "SyncFileItem::Status"
QT_MOC_LITERAL(7, 104, 6) // "status"

    },
    "OCC::PropagateDirectory\0possiblyRunNextJob\0"
    "\0PropagatorJob*\0next\0slotSubJobFinished\0"
    "SyncFileItem::Status\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateDirectory[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void OCC::PropagateDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateDirectory *_t = static_cast<PropagateDirectory *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->possiblyRunNextJob((*reinterpret_cast< PropagatorJob*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->slotSubJobFinished((*reinterpret_cast< SyncFileItem::Status(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropagatorJob* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OCC::PropagateDirectory::staticMetaObject = {
    { &PropagatorJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateDirectory.data,
      qt_meta_data_OCC__PropagateDirectory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateDirectory.stringdata))
        return static_cast<void*>(const_cast< PropagateDirectory*>(this));
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__PropagateIgnoreJob_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateIgnoreJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateIgnoreJob_t qt_meta_stringdata_OCC__PropagateIgnoreJob = {
    {
QT_MOC_LITERAL(0, 0, 23) // "OCC::PropagateIgnoreJob"

    },
    "OCC::PropagateIgnoreJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateIgnoreJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCC::PropagateIgnoreJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::PropagateIgnoreJob::staticMetaObject = {
    { &PropagateItemJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateIgnoreJob.data,
      qt_meta_data_OCC__PropagateIgnoreJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateIgnoreJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateIgnoreJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateIgnoreJob.stringdata))
        return static_cast<void*>(const_cast< PropagateIgnoreJob*>(this));
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateIgnoreJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OCC__OwncloudPropagator_t {
    QByteArrayData data[12];
    char stringdata[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudPropagator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudPropagator_t qt_meta_stringdata_OCC__OwncloudPropagator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::OwncloudPropagator"
QT_MOC_LITERAL(1, 24, 13), // "itemCompleted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "SyncFileItem"
QT_MOC_LITERAL(4, 52, 13), // "PropagatorJob"
QT_MOC_LITERAL(5, 66, 8), // "progress"
QT_MOC_LITERAL(6, 75, 5), // "bytes"
QT_MOC_LITERAL(7, 81, 8), // "finished"
QT_MOC_LITERAL(8, 90, 14), // "seenLockedFile"
QT_MOC_LITERAL(9, 105, 8), // "fileName"
QT_MOC_LITERAL(10, 114, 12), // "emitFinished"
QT_MOC_LITERAL(11, 127, 15) // "scheduleNextJob"

    },
    "OCC::OwncloudPropagator\0itemCompleted\0"
    "\0SyncFileItem\0PropagatorJob\0progress\0"
    "bytes\0finished\0seenLockedFile\0fileName\0"
    "emitFinished\0scheduleNextJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudPropagator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::ULongLong,    2,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudPropagator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudPropagator *_t = static_cast<OwncloudPropagator *>(_o);
        switch (_id) {
        case 0: _t->itemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< const PropagatorJob(*)>(_a[2]))); break;
        case 1: _t->progress((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->seenLockedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->emitFinished(); break;
        case 5: _t->scheduleNextJob(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwncloudPropagator::*_t)(const SyncFileItem & , const PropagatorJob & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudPropagator::itemCompleted)) {
                *result = 0;
            }
        }
        {
            typedef void (OwncloudPropagator::*_t)(const SyncFileItem & , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudPropagator::progress)) {
                *result = 1;
            }
        }
        {
            typedef void (OwncloudPropagator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudPropagator::finished)) {
                *result = 2;
            }
        }
        {
            typedef void (OwncloudPropagator::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudPropagator::seenLockedFile)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OCC::OwncloudPropagator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__OwncloudPropagator.data,
      qt_meta_data_OCC__OwncloudPropagator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudPropagator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudPropagator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudPropagator.stringdata))
        return static_cast<void*>(const_cast< OwncloudPropagator*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudPropagator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OCC::OwncloudPropagator::itemCompleted(const SyncFileItem & _t1, const PropagatorJob & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::OwncloudPropagator::progress(const SyncFileItem & _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OwncloudPropagator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OCC::OwncloudPropagator::seenLockedFile(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_OCC__CleanupPollsJob_t {
    QByteArrayData data[6];
    char stringdata[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CleanupPollsJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CleanupPollsJob_t qt_meta_stringdata_OCC__CleanupPollsJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::CleanupPollsJob"
QT_MOC_LITERAL(1, 21, 8), // "finished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "aborted"
QT_MOC_LITERAL(4, 39, 5), // "error"
QT_MOC_LITERAL(5, 45, 16) // "slotPollFinished"

    },
    "OCC::CleanupPollsJob\0finished\0\0aborted\0"
    "error\0slotPollFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CleanupPollsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::CleanupPollsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CleanupPollsJob *_t = static_cast<CleanupPollsJob *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->aborted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotPollFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CleanupPollsJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CleanupPollsJob::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (CleanupPollsJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CleanupPollsJob::aborted)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::CleanupPollsJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__CleanupPollsJob.data,
      qt_meta_data_OCC__CleanupPollsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::CleanupPollsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CleanupPollsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CleanupPollsJob.stringdata))
        return static_cast<void*>(const_cast< CleanupPollsJob*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::CleanupPollsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void OCC::CleanupPollsJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::CleanupPollsJob::aborted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
