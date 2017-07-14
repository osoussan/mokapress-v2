/****************************************************************************
** Meta object code from reading C++ file 'syncfilestatustracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/syncfilestatustracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncfilestatustracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SyncFileStatusTracker_t {
    QByteArrayData data[15];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SyncFileStatusTracker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SyncFileStatusTracker_t qt_meta_stringdata_OCC__SyncFileStatusTracker = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::SyncFileStatusTracker"
QT_MOC_LITERAL(1, 27, 17), // "fileStatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "systemFileName"
QT_MOC_LITERAL(4, 61, 14), // "SyncFileStatus"
QT_MOC_LITERAL(5, 76, 10), // "fileStatus"
QT_MOC_LITERAL(6, 87, 15), // "slotPathTouched"
QT_MOC_LITERAL(7, 103, 8), // "fileName"
QT_MOC_LITERAL(8, 112, 20), // "slotAboutToPropagate"
QT_MOC_LITERAL(9, 133, 19), // "SyncFileItemVector&"
QT_MOC_LITERAL(10, 153, 5), // "items"
QT_MOC_LITERAL(11, 159, 17), // "slotItemCompleted"
QT_MOC_LITERAL(12, 177, 12), // "SyncFileItem"
QT_MOC_LITERAL(13, 190, 4), // "item"
QT_MOC_LITERAL(14, 195, 28) // "slotSyncEngineRunningChanged"

    },
    "OCC::SyncFileStatusTracker\0fileStatusChanged\0"
    "\0systemFileName\0SyncFileStatus\0"
    "fileStatus\0slotPathTouched\0fileName\0"
    "slotAboutToPropagate\0SyncFileItemVector&\0"
    "items\0slotItemCompleted\0SyncFileItem\0"
    "item\0slotSyncEngineRunningChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SyncFileStatusTracker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x08 /* Private */,
      11,    1,   50,    2, 0x08 /* Private */,
      14,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void OCC::SyncFileStatusTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncFileStatusTracker *_t = static_cast<SyncFileStatusTracker *>(_o);
        switch (_id) {
        case 0: _t->fileStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SyncFileStatus(*)>(_a[2]))); break;
        case 1: _t->slotPathTouched((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotAboutToPropagate((*reinterpret_cast< SyncFileItemVector(*)>(_a[1]))); break;
        case 3: _t->slotItemCompleted((*reinterpret_cast< const SyncFileItem(*)>(_a[1]))); break;
        case 4: _t->slotSyncEngineRunningChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SyncFileStatusTracker::*_t)(const QString & , SyncFileStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncFileStatusTracker::fileStatusChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::SyncFileStatusTracker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__SyncFileStatusTracker.data,
      qt_meta_data_OCC__SyncFileStatusTracker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SyncFileStatusTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncFileStatusTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SyncFileStatusTracker.stringdata))
        return static_cast<void*>(const_cast< SyncFileStatusTracker*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::SyncFileStatusTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void OCC::SyncFileStatusTracker::fileStatusChanged(const QString & _t1, SyncFileStatus _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
