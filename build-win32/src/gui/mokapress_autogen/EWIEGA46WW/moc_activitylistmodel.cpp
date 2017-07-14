/****************************************************************************
** Meta object code from reading C++ file 'activitylistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/activitylistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitylistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ActivityListModel_t {
    QByteArrayData data[10];
    char stringdata[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ActivityListModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ActivityListModel_t qt_meta_stringdata_OCC__ActivityListModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::ActivityListModel"
QT_MOC_LITERAL(1, 23, 21), // "activityJobStatusCode"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "AccountState*"
QT_MOC_LITERAL(4, 60, 3), // "ast"
QT_MOC_LITERAL(5, 64, 10), // "statusCode"
QT_MOC_LITERAL(6, 75, 19), // "slotRefreshActivity"
QT_MOC_LITERAL(7, 95, 17), // "slotRemoveAccount"
QT_MOC_LITERAL(8, 113, 22), // "slotActivitiesReceived"
QT_MOC_LITERAL(9, 136, 4) // "json"

    },
    "OCC::ActivityListModel\0activityJobStatusCode\0"
    "\0AccountState*\0ast\0statusCode\0"
    "slotRefreshActivity\0slotRemoveAccount\0"
    "slotActivitiesReceived\0json"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ActivityListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x0a /* Public */,
       7,    1,   42,    2, 0x0a /* Public */,
       8,    2,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Int,    9,    5,

       0        // eod
};

void OCC::ActivityListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActivityListModel *_t = static_cast<ActivityListModel *>(_o);
        switch (_id) {
        case 0: _t->activityJobStatusCode((*reinterpret_cast< AccountState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slotRefreshActivity((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 2: _t->slotRemoveAccount((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 3: _t->slotActivitiesReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActivityListModel::*_t)(AccountState * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActivityListModel::activityJobStatusCode)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::ActivityListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_OCC__ActivityListModel.data,
      qt_meta_data_OCC__ActivityListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ActivityListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ActivityListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ActivityListModel.stringdata))
        return static_cast<void*>(const_cast< ActivityListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ActivityListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void OCC::ActivityListModel::activityJobStatusCode(AccountState * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
