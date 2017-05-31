/****************************************************************************
** Meta object code from reading C++ file 'propagatedownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/libsync/propagatedownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagatedownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__GETFileJob_t {
    QByteArrayData data[6];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__GETFileJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__GETFileJob_t qt_meta_stringdata_OCC__GETFileJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::GETFileJob"
QT_MOC_LITERAL(1, 16, 14), // "finishedSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 49, 13), // "slotReadyRead"
QT_MOC_LITERAL(5, 63, 19) // "slotMetaDataChanged"

    },
    "OCC::GETFileJob\0finishedSignal\0\0"
    "downloadProgress\0slotReadyRead\0"
    "slotMetaDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__GETFileJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::GETFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GETFileJob *_t = static_cast<GETFileJob *>(_o);
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->slotReadyRead(); break;
        case 3: _t->slotMetaDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GETFileJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GETFileJob::finishedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (GETFileJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GETFileJob::downloadProgress)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::GETFileJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__GETFileJob.data,
      qt_meta_data_OCC__GETFileJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::GETFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GETFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__GETFileJob.stringdata))
        return static_cast<void*>(const_cast< GETFileJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::GETFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void OCC::GETFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::GETFileJob::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__PropagateDownloadFileQNAM_t {
    QByteArrayData data[12];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropagateDownloadFileQNAM_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropagateDownloadFileQNAM_t qt_meta_stringdata_OCC__PropagateDownloadFileQNAM = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::PropagateDownloadFileQNAM"
QT_MOC_LITERAL(1, 31, 15), // "slotGetFinished"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "abort"
QT_MOC_LITERAL(4, 54, 29), // "transmissionChecksumValidated"
QT_MOC_LITERAL(5, 84, 12), // "checksumType"
QT_MOC_LITERAL(6, 97, 8), // "checksum"
QT_MOC_LITERAL(7, 106, 23), // "contentChecksumComputed"
QT_MOC_LITERAL(8, 130, 16), // "downloadFinished"
QT_MOC_LITERAL(9, 147, 20), // "slotDownloadProgress"
QT_MOC_LITERAL(10, 168, 16), // "slotChecksumFail"
QT_MOC_LITERAL(11, 185, 6) // "errMsg"

    },
    "OCC::PropagateDownloadFileQNAM\0"
    "slotGetFinished\0\0abort\0"
    "transmissionChecksumValidated\0"
    "checksumType\0checksum\0contentChecksumComputed\0"
    "downloadFinished\0slotDownloadProgress\0"
    "slotChecksumFail\0errMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropagateDownloadFileQNAM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    2,   51,    2, 0x08 /* Private */,
       7,    2,   56,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    2,   62,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void OCC::PropagateDownloadFileQNAM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropagateDownloadFileQNAM *_t = static_cast<PropagateDownloadFileQNAM *>(_o);
        switch (_id) {
        case 0: _t->slotGetFinished(); break;
        case 1: _t->abort(); break;
        case 2: _t->transmissionChecksumValidated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->contentChecksumComputed((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->downloadFinished(); break;
        case 5: _t->slotDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->slotChecksumFail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::PropagateDownloadFileQNAM::staticMetaObject = {
    { &PropagateItemJob::staticMetaObject, qt_meta_stringdata_OCC__PropagateDownloadFileQNAM.data,
      qt_meta_data_OCC__PropagateDownloadFileQNAM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropagateDownloadFileQNAM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDownloadFileQNAM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropagateDownloadFileQNAM.stringdata))
        return static_cast<void*>(const_cast< PropagateDownloadFileQNAM*>(this));
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateDownloadFileQNAM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
