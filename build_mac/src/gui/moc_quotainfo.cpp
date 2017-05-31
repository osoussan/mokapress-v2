/****************************************************************************
** Meta object code from reading C++ file 'quotainfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/quotainfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quotainfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__QuotaInfo_t {
    QByteArrayData data[9];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__QuotaInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__QuotaInfo_t qt_meta_stringdata_OCC__QuotaInfo = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::QuotaInfo"
QT_MOC_LITERAL(1, 15, 12), // "quotaUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "total"
QT_MOC_LITERAL(4, 35, 4), // "used"
QT_MOC_LITERAL(5, 40, 14), // "slotCheckQuota"
QT_MOC_LITERAL(6, 55, 19), // "slotUpdateLastQuota"
QT_MOC_LITERAL(7, 75, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(8, 99, 17) // "slotRequestFailed"

    },
    "OCC::QuotaInfo\0quotaUpdated\0\0total\0"
    "used\0slotCheckQuota\0slotUpdateLastQuota\0"
    "slotAccountStateChanged\0slotRequestFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__QuotaInfo[] = {

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
       5,    0,   44,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x08 /* Private */,
       7,    0,   48,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::QuotaInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuotaInfo *_t = static_cast<QuotaInfo *>(_o);
        switch (_id) {
        case 0: _t->quotaUpdated((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->slotCheckQuota(); break;
        case 2: _t->slotUpdateLastQuota((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 3: _t->slotAccountStateChanged(); break;
        case 4: _t->slotRequestFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuotaInfo::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuotaInfo::quotaUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::QuotaInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__QuotaInfo.data,
      qt_meta_data_OCC__QuotaInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::QuotaInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::QuotaInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__QuotaInfo.stringdata))
        return static_cast<void*>(const_cast< QuotaInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::QuotaInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::QuotaInfo::quotaUpdated(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
