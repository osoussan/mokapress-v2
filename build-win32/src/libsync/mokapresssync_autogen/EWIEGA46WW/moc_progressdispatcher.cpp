/****************************************************************************
** Meta object code from reading C++ file 'progressdispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/progressdispatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressdispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ProgressInfo_t {
    QByteArrayData data[3];
    char stringdata[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProgressInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProgressInfo_t qt_meta_stringdata_OCC__ProgressInfo = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ProgressInfo"
QT_MOC_LITERAL(1, 18, 15), // "updateEstimates"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "OCC::ProgressInfo\0updateEstimates\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProgressInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::ProgressInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgressInfo *_t = static_cast<ProgressInfo *>(_o);
        switch (_id) {
        case 0: _t->updateEstimates(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::ProgressInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ProgressInfo.data,
      qt_meta_data_OCC__ProgressInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ProgressInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProgressInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProgressInfo.stringdata))
        return static_cast<void*>(const_cast< ProgressInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ProgressInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__ProgressDispatcher_t {
    QByteArrayData data[11];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProgressDispatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProgressDispatcher_t qt_meta_stringdata_OCC__ProgressDispatcher = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::ProgressDispatcher"
QT_MOC_LITERAL(1, 24, 12), // "progressInfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "folder"
QT_MOC_LITERAL(4, 45, 12), // "ProgressInfo"
QT_MOC_LITERAL(5, 58, 8), // "progress"
QT_MOC_LITERAL(6, 67, 13), // "itemCompleted"
QT_MOC_LITERAL(7, 81, 12), // "SyncFileItem"
QT_MOC_LITERAL(8, 94, 4), // "item"
QT_MOC_LITERAL(9, 99, 13), // "PropagatorJob"
QT_MOC_LITERAL(10, 113, 3) // "job"

    },
    "OCC::ProgressDispatcher\0progressInfo\0"
    "\0folder\0ProgressInfo\0progress\0"
    "itemCompleted\0SyncFileItem\0item\0"
    "PropagatorJob\0job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProgressDispatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    3,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7, 0x80000000 | 9,    3,    8,   10,

       0        // eod
};

void OCC::ProgressDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgressDispatcher *_t = static_cast<ProgressDispatcher *>(_o);
        switch (_id) {
        case 0: _t->progressInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ProgressInfo(*)>(_a[2]))); break;
        case 1: _t->itemCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SyncFileItem(*)>(_a[2])),(*reinterpret_cast< const PropagatorJob(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProgressDispatcher::*_t)(const QString & , const ProgressInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgressDispatcher::progressInfo)) {
                *result = 0;
            }
        }
        {
            typedef void (ProgressDispatcher::*_t)(const QString & , const SyncFileItem & , const PropagatorJob & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgressDispatcher::itemCompleted)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ProgressDispatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ProgressDispatcher.data,
      qt_meta_data_OCC__ProgressDispatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ProgressDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProgressDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProgressDispatcher.stringdata))
        return static_cast<void*>(const_cast< ProgressDispatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ProgressDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::ProgressDispatcher::progressInfo(const QString & _t1, const ProgressInfo & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ProgressDispatcher::itemCompleted(const QString & _t1, const SyncFileItem & _t2, const PropagatorJob & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
