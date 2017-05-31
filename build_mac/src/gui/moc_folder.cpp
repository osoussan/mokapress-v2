/****************************************************************************
** Meta object code from reading C++ file 'folder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/folder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__Folder_t {
    QByteArrayData data[52];
    char stringdata[824];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Folder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Folder_t qt_meta_stringdata_OCC__Folder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OCC::Folder"
QT_MOC_LITERAL(1, 12, 15), // "syncStateChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "syncStarted"
QT_MOC_LITERAL(4, 41, 12), // "syncFinished"
QT_MOC_LITERAL(5, 54, 10), // "SyncResult"
QT_MOC_LITERAL(6, 65, 6), // "result"
QT_MOC_LITERAL(7, 72, 14), // "scheduleToSync"
QT_MOC_LITERAL(8, 87, 7), // "Folder*"
QT_MOC_LITERAL(9, 95, 12), // "progressInfo"
QT_MOC_LITERAL(10, 108, 12), // "ProgressInfo"
QT_MOC_LITERAL(11, 121, 8), // "progress"
QT_MOC_LITERAL(12, 130, 22), // "newBigFolderDiscovered"
QT_MOC_LITERAL(13, 153, 17), // "syncPausedChanged"
QT_MOC_LITERAL(14, 171, 6), // "paused"
QT_MOC_LITERAL(15, 178, 14), // "canSyncChanged"
QT_MOC_LITERAL(16, 193, 28), // "watchedFileChangedExternally"
QT_MOC_LITERAL(17, 222, 4), // "path"
QT_MOC_LITERAL(18, 227, 17), // "slotTerminateSync"
QT_MOC_LITERAL(19, 245, 25), // "slotAboutToRemoveAllFiles"
QT_MOC_LITERAL(20, 271, 23), // "SyncFileItem::Direction"
QT_MOC_LITERAL(21, 295, 5), // "bool*"
QT_MOC_LITERAL(22, 301, 24), // "slotAboutToRestoreBackup"
QT_MOC_LITERAL(23, 326, 9), // "startSync"
QT_MOC_LITERAL(24, 336, 8), // "pathList"
QT_MOC_LITERAL(25, 345, 13), // "setProxyDirty"
QT_MOC_LITERAL(26, 359, 5), // "value"
QT_MOC_LITERAL(27, 365, 10), // "proxyDirty"
QT_MOC_LITERAL(28, 376, 27), // "slotDiscardDownloadProgress"
QT_MOC_LITERAL(29, 404, 17), // "downloadInfoCount"
QT_MOC_LITERAL(30, 422, 22), // "slotWipeErrorBlacklist"
QT_MOC_LITERAL(31, 445, 24), // "errorBlackListEntryCount"
QT_MOC_LITERAL(32, 470, 22), // "slotWatchedPathChanged"
QT_MOC_LITERAL(33, 493, 15), // "slotSyncStarted"
QT_MOC_LITERAL(34, 509, 13), // "slotSyncError"
QT_MOC_LITERAL(35, 523, 20), // "slotCsyncUnavailable"
QT_MOC_LITERAL(36, 544, 16), // "slotSyncFinished"
QT_MOC_LITERAL(37, 561, 20), // "slotFolderDiscovered"
QT_MOC_LITERAL(38, 582, 5), // "local"
QT_MOC_LITERAL(39, 588, 10), // "folderName"
QT_MOC_LITERAL(40, 599, 24), // "slotTransmissionProgress"
QT_MOC_LITERAL(41, 624, 2), // "pi"
QT_MOC_LITERAL(42, 627, 17), // "slotItemCompleted"
QT_MOC_LITERAL(43, 645, 12), // "SyncFileItem"
QT_MOC_LITERAL(44, 658, 13), // "PropagatorJob"
QT_MOC_LITERAL(45, 672, 14), // "slotRunEtagJob"
QT_MOC_LITERAL(46, 687, 13), // "etagRetreived"
QT_MOC_LITERAL(47, 701, 27), // "etagRetreivedFromSyncEngine"
QT_MOC_LITERAL(48, 729, 24), // "slotThreadTreeWalkResult"
QT_MOC_LITERAL(49, 754, 18), // "SyncFileItemVector"
QT_MOC_LITERAL(50, 773, 23), // "slotEmitFinishedDelayed"
QT_MOC_LITERAL(51, 797, 26) // "slotNewBigFolderDiscovered"

    },
    "OCC::Folder\0syncStateChange\0\0syncStarted\0"
    "syncFinished\0SyncResult\0result\0"
    "scheduleToSync\0Folder*\0progressInfo\0"
    "ProgressInfo\0progress\0newBigFolderDiscovered\0"
    "syncPausedChanged\0paused\0canSyncChanged\0"
    "watchedFileChangedExternally\0path\0"
    "slotTerminateSync\0slotAboutToRemoveAllFiles\0"
    "SyncFileItem::Direction\0bool*\0"
    "slotAboutToRestoreBackup\0startSync\0"
    "pathList\0setProxyDirty\0value\0proxyDirty\0"
    "slotDiscardDownloadProgress\0"
    "downloadInfoCount\0slotWipeErrorBlacklist\0"
    "errorBlackListEntryCount\0"
    "slotWatchedPathChanged\0slotSyncStarted\0"
    "slotSyncError\0slotCsyncUnavailable\0"
    "slotSyncFinished\0slotFolderDiscovered\0"
    "local\0folderName\0slotTransmissionProgress\0"
    "pi\0slotItemCompleted\0SyncFileItem\0"
    "PropagatorJob\0slotRunEtagJob\0etagRetreived\0"
    "etagRetreivedFromSyncEngine\0"
    "slotThreadTreeWalkResult\0SyncFileItemVector\0"
    "slotEmitFinishedDelayed\0"
    "slotNewBigFolderDiscovered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Folder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  184,    2, 0x06 /* Public */,
       3,    0,  185,    2, 0x06 /* Public */,
       4,    1,  186,    2, 0x06 /* Public */,
       7,    1,  189,    2, 0x06 /* Public */,
       9,    1,  192,    2, 0x06 /* Public */,
      12,    1,  195,    2, 0x06 /* Public */,
      13,    2,  198,    2, 0x06 /* Public */,
      15,    0,  203,    2, 0x06 /* Public */,
      16,    1,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  207,    2, 0x0a /* Public */,
      19,    2,  208,    2, 0x0a /* Public */,
      22,    1,  213,    2, 0x0a /* Public */,
      23,    1,  216,    2, 0x0a /* Public */,
      23,    0,  219,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  220,    2, 0x0a /* Public */,
      27,    0,  223,    2, 0x0a /* Public */,
      28,    0,  224,    2, 0x0a /* Public */,
      29,    0,  225,    2, 0x0a /* Public */,
      30,    0,  226,    2, 0x0a /* Public */,
      31,    0,  227,    2, 0x0a /* Public */,
      32,    1,  228,    2, 0x0a /* Public */,
      33,    0,  231,    2, 0x08 /* Private */,
      34,    1,  232,    2, 0x08 /* Private */,
      35,    0,  235,    2, 0x08 /* Private */,
      36,    1,  236,    2, 0x08 /* Private */,
      37,    2,  239,    2, 0x08 /* Private */,
      40,    1,  244,    2, 0x08 /* Private */,
      42,    2,  247,    2, 0x08 /* Private */,
      45,    0,  252,    2, 0x08 /* Private */,
      46,    1,  253,    2, 0x08 /* Private */,
      47,    1,  256,    2, 0x08 /* Private */,
      48,    1,  259,    2, 0x08 /* Private */,
      50,    0,  262,    2, 0x08 /* Private */,
      51,    1,  263,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    2,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 21,    2,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, QMetaType::QStringList,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   38,   39,
    QMetaType::Void, 0x80000000 | 10,   41,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 44,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void OCC::Folder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Folder *_t = static_cast<Folder *>(_o);
        switch (_id) {
        case 0: _t->syncStateChange(); break;
        case 1: _t->syncStarted(); break;
        case 2: _t->syncFinished((*reinterpret_cast< const SyncResult(*)>(_a[1]))); break;
        case 3: _t->scheduleToSync((*reinterpret_cast< Folder*(*)>(_a[1]))); break;
        case 4: _t->progressInfo((*reinterpret_cast< const ProgressInfo(*)>(_a[1]))); break;
        case 5: _t->newBigFolderDiscovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->syncPausedChanged((*reinterpret_cast< Folder*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->canSyncChanged(); break;
        case 8: _t->watchedFileChangedExternally((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotTerminateSync(); break;
        case 10: _t->slotAboutToRemoveAllFiles((*reinterpret_cast< SyncFileItem::Direction(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 11: _t->slotAboutToRestoreBackup((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 12: _t->startSync((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->startSync(); break;
        case 14: _t->setProxyDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: { bool _r = _t->proxyDirty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->slotDiscardDownloadProgress();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->downloadInfoCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->slotWipeErrorBlacklist();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->errorBlackListEntryCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->slotWatchedPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->slotSyncStarted(); break;
        case 22: _t->slotSyncError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->slotCsyncUnavailable(); break;
        case 24: _t->slotSyncFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slotFolderDiscovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: _t->slotTransmissionProgress((*reinterpret_cast< const ProgressInfo(*)>(_a[1]))); break;
        case 27: _t->slotItemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< const PropagatorJob(*)>(_a[2]))); break;
        case 28: _t->slotRunEtagJob(); break;
        case 29: _t->etagRetreived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->etagRetreivedFromSyncEngine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->slotThreadTreeWalkResult((*reinterpret_cast< const SyncFileItemVector(*)>(_a[1]))); break;
        case 32: _t->slotEmitFinishedDelayed(); break;
        case 33: _t->slotNewBigFolderDiscovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Folder* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Folder* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Folder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::syncStateChange)) {
                *result = 0;
            }
        }
        {
            typedef void (Folder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::syncStarted)) {
                *result = 1;
            }
        }
        {
            typedef void (Folder::*_t)(const SyncResult & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::syncFinished)) {
                *result = 2;
            }
        }
        {
            typedef void (Folder::*_t)(Folder * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::scheduleToSync)) {
                *result = 3;
            }
        }
        {
            typedef void (Folder::*_t)(const ProgressInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::progressInfo)) {
                *result = 4;
            }
        }
        {
            typedef void (Folder::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::newBigFolderDiscovered)) {
                *result = 5;
            }
        }
        {
            typedef void (Folder::*_t)(Folder * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::syncPausedChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Folder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::canSyncChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (Folder::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Folder::watchedFileChangedExternally)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject OCC::Folder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__Folder.data,
      qt_meta_data_OCC__Folder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::Folder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Folder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Folder.stringdata))
        return static_cast<void*>(const_cast< Folder*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::Folder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void OCC::Folder::syncStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::Folder::syncStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OCC::Folder::syncFinished(const SyncResult & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Folder::scheduleToSync(Folder * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::Folder::progressInfo(const ProgressInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::Folder::newBigFolderDiscovered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Folder::syncPausedChanged(Folder * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::Folder::canSyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void OCC::Folder::watchedFileChangedExternally(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
