/****************************************************************************
** Meta object code from reading C++ file 'thumbnailjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/thumbnailjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thumbnailjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ThumbnailJob_t {
    QByteArrayData data[7];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ThumbnailJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ThumbnailJob_t qt_meta_stringdata_OCC__ThumbnailJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ThumbnailJob"
QT_MOC_LITERAL(1, 18, 11), // "jobFinished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "statusCode"
QT_MOC_LITERAL(4, 42, 5), // "reply"
QT_MOC_LITERAL(5, 48, 5), // "start"
QT_MOC_LITERAL(6, 54, 8) // "finished"

    },
    "OCC::ThumbnailJob\0jobFinished\0\0"
    "statusCode\0reply\0start\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ThumbnailJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void OCC::ThumbnailJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThumbnailJob *_t = static_cast<ThumbnailJob *>(_o);
        switch (_id) {
        case 0: _t->jobFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        case 2: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThumbnailJob::*_t)(int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThumbnailJob::jobFinished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::ThumbnailJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__ThumbnailJob.data,
      qt_meta_data_OCC__ThumbnailJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ThumbnailJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ThumbnailJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ThumbnailJob.stringdata))
        return static_cast<void*>(const_cast< ThumbnailJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::ThumbnailJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ThumbnailJob::jobFinished(int _t1, QByteArray _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
