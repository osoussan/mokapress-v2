/****************************************************************************
** Meta object code from reading C++ file 'discoveryphase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/discoveryphase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoveryphase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t {
    QByteArrayData data[15];
    char stringdata[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob_t qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob = {
    {
QT_MOC_LITERAL(0, 0, 32), // "OCC::DiscoverySingleDirectoryJob"
QT_MOC_LITERAL(1, 33, 25), // "firstDirectoryPermissions"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 17), // "etagConcatenation"
QT_MOC_LITERAL(4, 78, 4), // "etag"
QT_MOC_LITERAL(5, 83, 18), // "finishedWithResult"
QT_MOC_LITERAL(6, 102, 22), // "QList<FileStatPointer>"
QT_MOC_LITERAL(7, 125, 17), // "finishedWithError"
QT_MOC_LITERAL(8, 143, 14), // "csyncErrnoCode"
QT_MOC_LITERAL(9, 158, 3), // "msg"
QT_MOC_LITERAL(10, 162, 28), // "directoryListingIteratedSlot"
QT_MOC_LITERAL(11, 191, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(12, 213, 29), // "lsJobFinishedWithoutErrorSlot"
QT_MOC_LITERAL(13, 243, 26), // "lsJobFinishedWithErrorSlot"
QT_MOC_LITERAL(14, 270, 14) // "QNetworkReply*"

    },
    "OCC::DiscoverySingleDirectoryJob\0"
    "firstDirectoryPermissions\0\0etagConcatenation\0"
    "etag\0finishedWithResult\0QList<FileStatPointer>\0"
    "finishedWithError\0csyncErrnoCode\0msg\0"
    "directoryListingIteratedSlot\0"
    "QMap<QString,QString>\0"
    "lsJobFinishedWithoutErrorSlot\0"
    "lsJobFinishedWithErrorSlot\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoverySingleDirectoryJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    2,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   71,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void OCC::DiscoverySingleDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiscoverySingleDirectoryJob *_t = static_cast<DiscoverySingleDirectoryJob *>(_o);
        switch (_id) {
        case 0: _t->firstDirectoryPermissions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->etagConcatenation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->etag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishedWithResult((*reinterpret_cast< const QList<FileStatPointer>(*)>(_a[1]))); break;
        case 4: _t->finishedWithError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->directoryListingIteratedSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 6: _t->lsJobFinishedWithoutErrorSlot(); break;
        case 7: _t->lsJobFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiscoverySingleDirectoryJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoverySingleDirectoryJob::firstDirectoryPermissions)) {
                *result = 0;
            }
        }
        {
            typedef void (DiscoverySingleDirectoryJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoverySingleDirectoryJob::etagConcatenation)) {
                *result = 1;
            }
        }
        {
            typedef void (DiscoverySingleDirectoryJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoverySingleDirectoryJob::etag)) {
                *result = 2;
            }
        }
        {
            typedef void (DiscoverySingleDirectoryJob::*_t)(const QList<FileStatPointer> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoverySingleDirectoryJob::finishedWithResult)) {
                *result = 3;
            }
        }
        {
            typedef void (DiscoverySingleDirectoryJob::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoverySingleDirectoryJob::finishedWithError)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject OCC::DiscoverySingleDirectoryJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob.data,
      qt_meta_data_OCC__DiscoverySingleDirectoryJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::DiscoverySingleDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoverySingleDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoverySingleDirectoryJob.stringdata))
        return static_cast<void*>(const_cast< DiscoverySingleDirectoryJob*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoverySingleDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoverySingleDirectoryJob::firstDirectoryPermissions(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoverySingleDirectoryJob::etagConcatenation(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoverySingleDirectoryJob::etag(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::DiscoverySingleDirectoryJob::finishedWithResult(const QList<FileStatPointer> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoverySingleDirectoryJob::finishedWithError(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_OCC__DiscoveryMainThread_t {
    QByteArrayData data[19];
    char stringdata[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoveryMainThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoveryMainThread_t qt_meta_stringdata_OCC__DiscoveryMainThread = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::DiscoveryMainThread"
QT_MOC_LITERAL(1, 25, 4), // "etag"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "etagConcatenation"
QT_MOC_LITERAL(4, 49, 13), // "doOpendirSlot"
QT_MOC_LITERAL(5, 63, 3), // "url"
QT_MOC_LITERAL(6, 67, 25), // "DiscoveryDirectoryResult*"
QT_MOC_LITERAL(7, 93, 13), // "doGetSizeSlot"
QT_MOC_LITERAL(8, 107, 4), // "path"
QT_MOC_LITERAL(9, 112, 7), // "qint64*"
QT_MOC_LITERAL(10, 120, 6), // "result"
QT_MOC_LITERAL(11, 127, 28), // "singleDirectoryJobResultSlot"
QT_MOC_LITERAL(12, 156, 22), // "QList<FileStatPointer>"
QT_MOC_LITERAL(13, 179, 39), // "singleDirectoryJobFinishedWit..."
QT_MOC_LITERAL(14, 219, 14), // "csyncErrnoCode"
QT_MOC_LITERAL(15, 234, 3), // "msg"
QT_MOC_LITERAL(16, 238, 47), // "singleDirectoryJobFirstDirect..."
QT_MOC_LITERAL(17, 286, 28), // "slotGetSizeFinishedWithError"
QT_MOC_LITERAL(18, 315, 17) // "slotGetSizeResult"

    },
    "OCC::DiscoveryMainThread\0etag\0\0"
    "etagConcatenation\0doOpendirSlot\0url\0"
    "DiscoveryDirectoryResult*\0doGetSizeSlot\0"
    "path\0qint64*\0result\0singleDirectoryJobResultSlot\0"
    "QList<FileStatPointer>\0"
    "singleDirectoryJobFinishedWithErrorSlot\0"
    "csyncErrnoCode\0msg\0"
    "singleDirectoryJobFirstDirectoryPermissionsSlot\0"
    "slotGetSizeFinishedWithError\0"
    "slotGetSizeResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoveryMainThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   65,    2, 0x0a /* Public */,
       7,    2,   70,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    2,   78,    2, 0x0a /* Public */,
      16,    1,   83,    2, 0x0a /* Public */,
      17,    0,   86,    2, 0x0a /* Public */,
      18,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void OCC::DiscoveryMainThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiscoveryMainThread *_t = static_cast<DiscoveryMainThread *>(_o);
        switch (_id) {
        case 0: _t->etag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->etagConcatenation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doOpendirSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< DiscoveryDirectoryResult*(*)>(_a[2]))); break;
        case 3: _t->doGetSizeSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64*(*)>(_a[2]))); break;
        case 4: _t->singleDirectoryJobResultSlot((*reinterpret_cast< const QList<FileStatPointer>(*)>(_a[1]))); break;
        case 5: _t->singleDirectoryJobFinishedWithErrorSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->singleDirectoryJobFirstDirectoryPermissionsSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotGetSizeFinishedWithError(); break;
        case 8: _t->slotGetSizeResult((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiscoveryMainThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryMainThread::etag)) {
                *result = 0;
            }
        }
        {
            typedef void (DiscoveryMainThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryMainThread::etagConcatenation)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::DiscoveryMainThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__DiscoveryMainThread.data,
      qt_meta_data_OCC__DiscoveryMainThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::DiscoveryMainThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoveryMainThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoveryMainThread.stringdata))
        return static_cast<void*>(const_cast< DiscoveryMainThread*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoveryMainThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoveryMainThread::etag(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoveryMainThread::etagConcatenation(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__DiscoveryJob_t {
    QByteArrayData data[16];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DiscoveryJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DiscoveryJob_t qt_meta_stringdata_OCC__DiscoveryJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::DiscoveryJob"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "result"
QT_MOC_LITERAL(4, 35, 16), // "folderDiscovered"
QT_MOC_LITERAL(5, 52, 5), // "local"
QT_MOC_LITERAL(6, 58, 9), // "folderUrl"
QT_MOC_LITERAL(7, 68, 15), // "doOpendirSignal"
QT_MOC_LITERAL(8, 84, 3), // "url"
QT_MOC_LITERAL(9, 88, 25), // "DiscoveryDirectoryResult*"
QT_MOC_LITERAL(10, 114, 15), // "doGetSizeSignal"
QT_MOC_LITERAL(11, 130, 4), // "path"
QT_MOC_LITERAL(12, 135, 7), // "qint64*"
QT_MOC_LITERAL(13, 143, 12), // "newBigFolder"
QT_MOC_LITERAL(14, 156, 6), // "folder"
QT_MOC_LITERAL(15, 163, 5) // "start"

    },
    "OCC::DiscoveryJob\0finished\0\0result\0"
    "folderDiscovered\0local\0folderUrl\0"
    "doOpendirSignal\0url\0DiscoveryDirectoryResult*\0"
    "doGetSizeSignal\0path\0qint64*\0newBigFolder\0"
    "folder\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DiscoveryJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       7,    2,   52,    2, 0x06 /* Public */,
      10,    2,   57,    2, 0x06 /* Public */,
      13,    1,   62,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   11,    3,
    QMetaType::Void, QMetaType::QString,   14,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::DiscoveryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiscoveryJob *_t = static_cast<DiscoveryJob *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->folderDiscovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->doOpendirSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< DiscoveryDirectoryResult*(*)>(_a[2]))); break;
        case 3: _t->doGetSizeSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64*(*)>(_a[2]))); break;
        case 4: _t->newBigFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiscoveryJob::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryJob::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (DiscoveryJob::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryJob::folderDiscovered)) {
                *result = 1;
            }
        }
        {
            typedef void (DiscoveryJob::*_t)(QString , DiscoveryDirectoryResult * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryJob::doOpendirSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (DiscoveryJob::*_t)(const QString & , qint64 * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryJob::doGetSizeSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (DiscoveryJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiscoveryJob::newBigFolder)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject OCC::DiscoveryJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__DiscoveryJob.data,
      qt_meta_data_OCC__DiscoveryJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::DiscoveryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoveryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DiscoveryJob.stringdata))
        return static_cast<void*>(const_cast< DiscoveryJob*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoveryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::DiscoveryJob::finished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoveryJob::folderDiscovered(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoveryJob::doOpendirSignal(QString _t1, DiscoveryDirectoryResult * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::DiscoveryJob::doGetSizeSignal(const QString & _t1, qint64 * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoveryJob::newBigFolder(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
