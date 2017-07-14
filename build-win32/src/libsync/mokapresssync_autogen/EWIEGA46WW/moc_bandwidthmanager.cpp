/****************************************************************************
** Meta object code from reading C++ file 'bandwidthmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/bandwidthmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bandwidthmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__BandwidthManager_t {
    QByteArrayData data[14];
    char stringdata[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__BandwidthManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__BandwidthManager_t qt_meta_stringdata_OCC__BandwidthManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::BandwidthManager"
QT_MOC_LITERAL(1, 22, 20), // "registerUploadDevice"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "UploadDevice*"
QT_MOC_LITERAL(4, 58, 22), // "unregisterUploadDevice"
QT_MOC_LITERAL(5, 81, 19), // "registerDownloadJob"
QT_MOC_LITERAL(6, 101, 11), // "GETFileJob*"
QT_MOC_LITERAL(7, 113, 21), // "unregisterDownloadJob"
QT_MOC_LITERAL(8, 135, 25), // "absoluteLimitTimerExpired"
QT_MOC_LITERAL(9, 161, 21), // "switchingTimerExpired"
QT_MOC_LITERAL(10, 183, 35), // "relativeUploadMeasuringTimerE..."
QT_MOC_LITERAL(11, 219, 31), // "relativeUploadDelayTimerExpired"
QT_MOC_LITERAL(12, 251, 37), // "relativeDownloadMeasuringTime..."
QT_MOC_LITERAL(13, 289, 33) // "relativeDownloadDelayTimerExp..."

    },
    "OCC::BandwidthManager\0registerUploadDevice\0"
    "\0UploadDevice*\0unregisterUploadDevice\0"
    "registerDownloadJob\0GETFileJob*\0"
    "unregisterDownloadJob\0absoluteLimitTimerExpired\0"
    "switchingTimerExpired\0"
    "relativeUploadMeasuringTimerExpired\0"
    "relativeUploadDelayTimerExpired\0"
    "relativeDownloadMeasuringTimerExpired\0"
    "relativeDownloadDelayTimerExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__BandwidthManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       4,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       7,    1,   86,    2, 0x0a /* Public */,
       7,    1,   89,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::BandwidthManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BandwidthManager *_t = static_cast<BandwidthManager *>(_o);
        switch (_id) {
        case 0: _t->registerUploadDevice((*reinterpret_cast< UploadDevice*(*)>(_a[1]))); break;
        case 1: _t->unregisterUploadDevice((*reinterpret_cast< UploadDevice*(*)>(_a[1]))); break;
        case 2: _t->unregisterUploadDevice((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->registerDownloadJob((*reinterpret_cast< GETFileJob*(*)>(_a[1]))); break;
        case 4: _t->unregisterDownloadJob((*reinterpret_cast< GETFileJob*(*)>(_a[1]))); break;
        case 5: _t->unregisterDownloadJob((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->absoluteLimitTimerExpired(); break;
        case 7: _t->switchingTimerExpired(); break;
        case 8: _t->relativeUploadMeasuringTimerExpired(); break;
        case 9: _t->relativeUploadDelayTimerExpired(); break;
        case 10: _t->relativeDownloadMeasuringTimerExpired(); break;
        case 11: _t->relativeDownloadDelayTimerExpired(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::BandwidthManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__BandwidthManager.data,
      qt_meta_data_OCC__BandwidthManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::BandwidthManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::BandwidthManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__BandwidthManager.stringdata))
        return static_cast<void*>(const_cast< BandwidthManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::BandwidthManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
