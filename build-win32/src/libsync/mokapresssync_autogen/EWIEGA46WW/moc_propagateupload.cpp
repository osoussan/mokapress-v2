/****************************************************************************
** Meta object code from reading C++ file 'propagateupload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/propagateupload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateupload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__UploadDevice_t {
    QByteArrayData data[6];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UploadDevice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UploadDevice_t qt_meta_stringdata_OCC__UploadDevice = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::UploadDevice"
QT_MOC_LITERAL(1, 18, 8), // "wasReset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "slotJobUploadProgress"
QT_MOC_LITERAL(4, 50, 4), // "sent"
QT_MOC_LITERAL(5, 55, 1) // "t"

    },
    "OCC::UploadDevice\0wasReset\0\0"
    "slotJobUploadProgress\0sent\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UploadDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void OCC::UploadDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UploadDevice *_t = static_cast<UploadDevice *>(_o);
        switch (_id) {
        case 0: _t->wasReset(); break;
        case 1: _t->slotJobUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UploadDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UploadDevice::wasReset)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::UploadDevice::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_OCC__UploadDevice.data,
      qt_meta_data_OCC__UploadDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::UploadDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UploadDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UploadDevice.stringdata))
        return static_cast<void*>(const_cast< UploadDevice*>(this));
    return QIODevice::qt_metacast(_clname);
}

int OCC::UploadDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::UploadDevice::wasReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__PUTFileJob_t {
    QByteArrayData data[5];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PUTFileJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PUTFileJob_t qt_meta_stringdata_OCC__PUTFileJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::PUTFileJob"
QT_MOC_LITERAL(1, 16, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "uploadProgress"
QT_MOC_LITERAL(4, 47, 13) // "slotSoftAbort"

    },
    "OCC::PUTFileJob\0finishedSignal\0\0"
    "uploadProgress\0slotSoftAbort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PUTFileJob[] = {

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
       3,    2,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::PUTFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PUTFileJob *_t = static_cast<PUTFileJob *>(_o);
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->slotSoftAbort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PUTFileJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PUTFileJob::finishedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (PUTFileJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PUTFileJob::uploadProgress)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::PUTFileJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__PUTFileJob.data,
      qt_meta_data_OCC__PUTFileJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PUTFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PUTFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PUTFileJob.stringdata))
        return static_cast<void*>(const_cast< PUTFileJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PUTFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::PUTFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::PUTFileJob::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__PollJob_t {
    QByteArrayData data[3];
    char stringdata[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PollJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PollJob_t qt_meta_stringdata_OCC__PollJob = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OCC::PollJob"
QT_MOC_LITERAL(1, 13, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "OCC::PollJob\0finishedSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PollJob[] = {

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

void OCC::PollJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PollJob *_t = static_cast<PollJob *>(_o);
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PollJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PollJob::finishedSignal)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::PollJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__PollJob.data,
      qt_meta_data_OCC__PollJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PollJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PollJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PollJob.stringdata))
        return static_cast<void*>(const_cast< PollJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PollJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::PollJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__PropagateUploadFileQNAM_t {
    QByteArrayData data[18];
    char stringdata[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateUploadFileQNAM_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateUploadFileQNAM_t qt_meta_stringdata_OCC__PropagateUploadFileQNAM = {
    {
QT_MOC_LITERAL(0, 0, 28), // "OCC::PropagateUploadFileQNAM"
QT_MOC_LITERAL(1, 29, 15), // "slotPutFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "slotPollFinished"
QT_MOC_LITERAL(4, 63, 18), // "slotUploadProgress"
QT_MOC_LITERAL(5, 82, 5), // "abort"
QT_MOC_LITERAL(6, 88, 14), // "startNextChunk"
QT_MOC_LITERAL(7, 103, 8), // "finalize"
QT_MOC_LITERAL(8, 112, 12), // "SyncFileItem"
QT_MOC_LITERAL(9, 125, 16), // "slotJobDestroyed"
QT_MOC_LITERAL(10, 142, 3), // "job"
QT_MOC_LITERAL(11, 146, 15), // "slotStartUpload"
QT_MOC_LITERAL(12, 162, 24), // "transmissionChecksumType"
QT_MOC_LITERAL(13, 187, 20), // "transmissionChecksum"
QT_MOC_LITERAL(14, 208, 31), // "slotComputeTransmissionChecksum"
QT_MOC_LITERAL(15, 240, 19), // "contentChecksumType"
QT_MOC_LITERAL(16, 260, 15), // "contentChecksum"
QT_MOC_LITERAL(17, 276, 26) // "slotComputeContentChecksum"

    },
    "OCC::PropagateUploadFileQNAM\0"
    "slotPutFinished\0\0slotPollFinished\0"
    "slotUploadProgress\0abort\0startNextChunk\0"
    "finalize\0SyncFileItem\0slotJobDestroyed\0"
    "job\0slotStartUpload\0transmissionChecksumType\0"
    "transmissionChecksum\0"
    "slotComputeTransmissionChecksum\0"
    "contentChecksumType\0contentChecksum\0"
    "slotComputeContentChecksum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateUploadFileQNAM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    2,   66,    2, 0x08 /* Private */,
       5,    0,   71,    2, 0x08 /* Private */,
       6,    0,   72,    2, 0x08 /* Private */,
       7,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    2,   79,    2, 0x08 /* Private */,
      14,    2,   84,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   12,   13,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   15,   16,
    QMetaType::Void,

       0        // eod
};

void OCC::PropagateUploadFileQNAM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateUploadFileQNAM *_t = static_cast<PropagateUploadFileQNAM *>(_o);
        switch (_id) {
        case 0: _t->slotPutFinished(); break;
        case 1: _t->slotPollFinished(); break;
        case 2: _t->slotUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->abort(); break;
        case 4: _t->startNextChunk(); break;
        case 5: _t->finalize((*reinterpret_cast< const SyncFileItem(*)>(_a[1]))); break;
        case 6: _t->slotJobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->slotStartUpload((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->slotComputeTransmissionChecksum((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 9: _t->slotComputeContentChecksum(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::PropagateUploadFileQNAM::staticMetaObject = {
    { &PropagateItemJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateUploadFileQNAM.data,
      qt_meta_data_OCC__PropagateUploadFileQNAM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateUploadFileQNAM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileQNAM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateUploadFileQNAM.stringdata))
        return static_cast<void*>(const_cast< PropagateUploadFileQNAM*>(this));
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateUploadFileQNAM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
