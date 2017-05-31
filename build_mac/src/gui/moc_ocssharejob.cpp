/****************************************************************************
** Meta object code from reading C++ file 'ocssharejob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/ocssharejob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ocssharejob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OcsShareJob_t {
    QByteArrayData data[6];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OcsShareJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OcsShareJob_t qt_meta_stringdata_OCC__OcsShareJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::OcsShareJob"
QT_MOC_LITERAL(1, 17, 16), // "shareJobFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "reply"
QT_MOC_LITERAL(4, 41, 5), // "value"
QT_MOC_LITERAL(5, 47, 7) // "jobDone"

    },
    "OCC::OcsShareJob\0shareJobFinished\0\0"
    "reply\0value\0jobDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OcsShareJob[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,

       0        // eod
};

void OCC::OcsShareJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OcsShareJob *_t = static_cast<OcsShareJob *>(_o);
        switch (_id) {
        case 0: _t->shareJobFinished((*reinterpret_cast< QVariantMap(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->jobDone((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OcsShareJob::*_t)(QVariantMap , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OcsShareJob::shareJobFinished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::OcsShareJob::staticMetaObject = {
    { &OcsJob::staticMetaObject, qt_meta_stringdata_OCC__OcsShareJob.data,
      qt_meta_data_OCC__OcsShareJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OcsShareJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OcsShareJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OcsShareJob.stringdata))
        return static_cast<void*>(const_cast< OcsShareJob*>(this));
    return OcsJob::qt_metacast(_clname);
}

int OCC::OcsShareJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OcsJob::qt_metacall(_c, _id, _a);
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
void OCC::OcsShareJob::shareJobFinished(QVariantMap _t1, QVariant _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
