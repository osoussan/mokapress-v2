/****************************************************************************
** Meta object code from reading C++ file 'syncengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/syncengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SyncEngine_t {
    QByteArrayData data[45];
    char stringdata[588];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncEngine_t qt_meta_stringdata_OCC__SyncEngine = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::SyncEngine"
QT_MOC_LITERAL(1, 16, 10), // "csyncError"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "csyncUnavailable"
QT_MOC_LITERAL(4, 45, 8), // "rootEtag"
QT_MOC_LITERAL(5, 54, 16), // "folderDiscovered"
QT_MOC_LITERAL(6, 71, 5), // "local"
QT_MOC_LITERAL(7, 77, 9), // "folderUrl"
QT_MOC_LITERAL(8, 87, 18), // "syncItemDiscovered"
QT_MOC_LITERAL(9, 106, 12), // "SyncFileItem"
QT_MOC_LITERAL(10, 119, 16), // "aboutToPropagate"
QT_MOC_LITERAL(11, 136, 19), // "SyncFileItemVector&"
QT_MOC_LITERAL(12, 156, 13), // "itemCompleted"
QT_MOC_LITERAL(13, 170, 13), // "PropagatorJob"
QT_MOC_LITERAL(14, 184, 14), // "treeWalkResult"
QT_MOC_LITERAL(15, 199, 18), // "SyncFileItemVector"
QT_MOC_LITERAL(16, 218, 20), // "transmissionProgress"
QT_MOC_LITERAL(17, 239, 12), // "ProgressInfo"
QT_MOC_LITERAL(18, 252, 8), // "progress"
QT_MOC_LITERAL(19, 261, 8), // "finished"
QT_MOC_LITERAL(20, 270, 7), // "success"
QT_MOC_LITERAL(21, 278, 7), // "started"
QT_MOC_LITERAL(22, 286, 21), // "aboutToRemoveAllFiles"
QT_MOC_LITERAL(23, 308, 23), // "SyncFileItem::Direction"
QT_MOC_LITERAL(24, 332, 9), // "direction"
QT_MOC_LITERAL(25, 342, 5), // "bool*"
QT_MOC_LITERAL(26, 348, 6), // "cancel"
QT_MOC_LITERAL(27, 355, 20), // "aboutToRestoreBackup"
QT_MOC_LITERAL(28, 376, 7), // "restore"
QT_MOC_LITERAL(29, 384, 12), // "newBigFolder"
QT_MOC_LITERAL(30, 397, 6), // "folder"
QT_MOC_LITERAL(31, 404, 14), // "seenLockedFile"
QT_MOC_LITERAL(32, 419, 8), // "fileName"
QT_MOC_LITERAL(33, 428, 20), // "slotRootEtagReceived"
QT_MOC_LITERAL(34, 449, 17), // "slotItemCompleted"
QT_MOC_LITERAL(35, 467, 4), // "item"
QT_MOC_LITERAL(36, 472, 3), // "job"
QT_MOC_LITERAL(37, 476, 12), // "slotFinished"
QT_MOC_LITERAL(38, 489, 12), // "slotProgress"
QT_MOC_LITERAL(39, 502, 6), // "curent"
QT_MOC_LITERAL(40, 509, 24), // "slotDiscoveryJobFinished"
QT_MOC_LITERAL(41, 534, 12), // "updateResult"
QT_MOC_LITERAL(42, 547, 24), // "slotCleanPollsJobAborted"
QT_MOC_LITERAL(43, 572, 5), // "error"
QT_MOC_LITERAL(44, 578, 9) // "startSync"

    },
    "OCC::SyncEngine\0csyncError\0\0"
    "csyncUnavailable\0rootEtag\0folderDiscovered\0"
    "local\0folderUrl\0syncItemDiscovered\0"
    "SyncFileItem\0aboutToPropagate\0"
    "SyncFileItemVector&\0itemCompleted\0"
    "PropagatorJob\0treeWalkResult\0"
    "SyncFileItemVector\0transmissionProgress\0"
    "ProgressInfo\0progress\0finished\0success\0"
    "started\0aboutToRemoveAllFiles\0"
    "SyncFileItem::Direction\0direction\0"
    "bool*\0cancel\0aboutToRestoreBackup\0"
    "restore\0newBigFolder\0folder\0seenLockedFile\0"
    "fileName\0slotRootEtagReceived\0"
    "slotItemCompleted\0item\0job\0slotFinished\0"
    "slotProgress\0curent\0slotDiscoveryJobFinished\0"
    "updateResult\0slotCleanPollsJobAborted\0"
    "error\0startSync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    0,  127,    2, 0x06 /* Public */,
       4,    1,  128,    2, 0x06 /* Public */,
       5,    2,  131,    2, 0x06 /* Public */,
       8,    1,  136,    2, 0x06 /* Public */,
      10,    1,  139,    2, 0x06 /* Public */,
      12,    2,  142,    2, 0x06 /* Public */,
      14,    1,  147,    2, 0x06 /* Public */,
      16,    1,  150,    2, 0x06 /* Public */,
      19,    1,  153,    2, 0x06 /* Public */,
      21,    0,  156,    2, 0x06 /* Public */,
      22,    2,  157,    2, 0x06 /* Public */,
      27,    1,  162,    2, 0x06 /* Public */,
      29,    1,  165,    2, 0x06 /* Public */,
      31,    1,  168,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  171,    2, 0x08 /* Private */,
      34,    2,  174,    2, 0x08 /* Private */,
      37,    0,  179,    2, 0x08 /* Private */,
      38,    2,  180,    2, 0x08 /* Private */,
      40,    1,  185,    2, 0x08 /* Private */,
      42,    1,  188,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      44,    0,  191,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 13,    2,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25,   24,   26,
    QMetaType::Void, 0x80000000 | 25,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 13,   35,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULongLong,   35,   39,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::QString,   43,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::SyncEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncEngine *_t = static_cast<SyncEngine *>(_o);
        switch (_id) {
        case 0: _t->csyncError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->csyncUnavailable(); break;
        case 2: _t->rootEtag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->folderDiscovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->syncItemDiscovered((*reinterpret_cast< const SyncFileItem(*)>(_a[1]))); break;
        case 5: _t->aboutToPropagate((*reinterpret_cast< SyncFileItemVector(*)>(_a[1]))); break;
        case 6: _t->itemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< const PropagatorJob(*)>(_a[2]))); break;
        case 7: _t->treeWalkResult((*reinterpret_cast< const SyncFileItemVector(*)>(_a[1]))); break;
        case 8: _t->transmissionProgress((*reinterpret_cast< const ProgressInfo(*)>(_a[1]))); break;
        case 9: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->started(); break;
        case 11: _t->aboutToRemoveAllFiles((*reinterpret_cast< SyncFileItem::Direction(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 12: _t->aboutToRestoreBackup((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 13: _t->newBigFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->seenLockedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->slotRootEtagReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slotItemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< const PropagatorJob(*)>(_a[2]))); break;
        case 17: _t->slotFinished(); break;
        case 18: _t->slotProgress((*reinterpret_cast< const SyncFileItem(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 19: _t->slotDiscoveryJobFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->slotCleanPollsJobAborted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->startSync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SyncEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::csyncError)) {
                *result = 0;
            }
        }
        {
            typedef void (SyncEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::csyncUnavailable)) {
                *result = 1;
            }
        }
        {
            typedef void (SyncEngine::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::rootEtag)) {
                *result = 2;
            }
        }
        {
            typedef void (SyncEngine::*_t)(bool , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::folderDiscovered)) {
                *result = 3;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const SyncFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::syncItemDiscovered)) {
                *result = 4;
            }
        }
        {
            typedef void (SyncEngine::*_t)(SyncFileItemVector & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::aboutToPropagate)) {
                *result = 5;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const SyncFileItem & , const PropagatorJob & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::itemCompleted)) {
                *result = 6;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const SyncFileItemVector & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::treeWalkResult)) {
                *result = 7;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const ProgressInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::transmissionProgress)) {
                *result = 8;
            }
        }
        {
            typedef void (SyncEngine::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::finished)) {
                *result = 9;
            }
        }
        {
            typedef void (SyncEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::started)) {
                *result = 10;
            }
        }
        {
            typedef void (SyncEngine::*_t)(SyncFileItem::Direction , bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::aboutToRemoveAllFiles)) {
                *result = 11;
            }
        }
        {
            typedef void (SyncEngine::*_t)(bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::aboutToRestoreBackup)) {
                *result = 12;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::newBigFolder)) {
                *result = 13;
            }
        }
        {
            typedef void (SyncEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncEngine::seenLockedFile)) {
                *result = 14;
            }
        }
    }
}

const QMetaObject OCC::SyncEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__SyncEngine.data,
      qt_meta_data_OCC__SyncEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SyncEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SyncEngine.stringdata))
        return static_cast<void*>(const_cast< SyncEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::SyncEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncEngine::csyncError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SyncEngine::csyncUnavailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OCC::SyncEngine::rootEtag(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::SyncEngine::folderDiscovered(bool _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::SyncEngine::syncItemDiscovered(const SyncFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::SyncEngine::aboutToPropagate(SyncFileItemVector & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::SyncEngine::itemCompleted(const SyncFileItem & _t1, const PropagatorJob & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::SyncEngine::treeWalkResult(const SyncFileItemVector & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::SyncEngine::transmissionProgress(const ProgressInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OCC::SyncEngine::finished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OCC::SyncEngine::started()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void OCC::SyncEngine::aboutToRemoveAllFiles(SyncFileItem::Direction _t1, bool * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OCC::SyncEngine::aboutToRestoreBackup(bool * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OCC::SyncEngine::newBigFolder(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OCC::SyncEngine::seenLockedFile(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
