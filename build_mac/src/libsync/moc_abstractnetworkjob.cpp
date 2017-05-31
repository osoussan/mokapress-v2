/****************************************************************************
** Meta object code from reading C++ file 'abstractnetworkjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/libsync/abstractnetworkjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractnetworkjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__AbstractNetworkJob_t {
    QByteArrayData data[11];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AbstractNetworkJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AbstractNetworkJob_t qt_meta_stringdata_OCC__AbstractNetworkJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OCC::AbstractNetworkJob"
QT_MOC_LITERAL(1, 24, 12), // "networkError"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 53, 5), // "reply"
QT_MOC_LITERAL(5, 59, 15), // "networkActivity"
QT_MOC_LITERAL(6, 75, 10), // "setTimeout"
QT_MOC_LITERAL(7, 86, 4), // "msec"
QT_MOC_LITERAL(8, 91, 12), // "resetTimeout"
QT_MOC_LITERAL(9, 104, 12), // "slotFinished"
QT_MOC_LITERAL(10, 117, 11) // "slotTimeout"

    },
    "OCC::AbstractNetworkJob\0networkError\0"
    "\0QNetworkReply*\0reply\0networkActivity\0"
    "setTimeout\0msec\0resetTimeout\0slotFinished\0"
    "slotTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AbstractNetworkJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::AbstractNetworkJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractNetworkJob *_t = static_cast<AbstractNetworkJob *>(_o);
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->networkActivity(); break;
        case 2: _t->setTimeout((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->resetTimeout(); break;
        case 4: _t->slotFinished(); break;
        case 5: _t->slotTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (AbstractNetworkJob::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractNetworkJob::networkError)) {
                *result = 0;
            }
        }
        {
            typedef void (AbstractNetworkJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractNetworkJob::networkActivity)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::AbstractNetworkJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__AbstractNetworkJob.data,
      qt_meta_data_OCC__AbstractNetworkJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::AbstractNetworkJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AbstractNetworkJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AbstractNetworkJob.stringdata))
        return static_cast<void*>(const_cast< AbstractNetworkJob*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::AbstractNetworkJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::AbstractNetworkJob::networkError(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AbstractNetworkJob::networkActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
