/****************************************************************************
** Meta object code from reading C++ file 'sharedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/sharedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ShareDialog_t {
    QByteArrayData data[12];
    char stringdata[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareDialog_t qt_meta_stringdata_OCC__ShareDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::ShareDialog"
QT_MOC_LITERAL(1, 17, 4), // "done"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "r"
QT_MOC_LITERAL(4, 25, 33), // "slotMaxSharingPermissionsRece..."
QT_MOC_LITERAL(5, 59, 6), // "result"
QT_MOC_LITERAL(6, 66, 30), // "slotMaxSharingPermissionsError"
QT_MOC_LITERAL(7, 97, 20), // "slotThumbnailFetched"
QT_MOC_LITERAL(8, 118, 10), // "statusCode"
QT_MOC_LITERAL(9, 129, 5), // "reply"
QT_MOC_LITERAL(10, 135, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(11, 159, 5) // "state"

    },
    "OCC::ShareDialog\0done\0\0r\0"
    "slotMaxSharingPermissionsReceived\0"
    "result\0slotMaxSharingPermissionsError\0"
    "slotThumbnailFetched\0statusCode\0reply\0"
    "slotAccountStateChanged\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    2,   46,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void OCC::ShareDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShareDialog *_t = static_cast<ShareDialog *>(_o);
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotMaxSharingPermissionsReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->slotMaxSharingPermissionsError(); break;
        case 3: _t->slotThumbnailFetched((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->slotAccountStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::ShareDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OCC__ShareDialog.data,
      qt_meta_data_OCC__ShareDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShareDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareDialog.stringdata))
        return static_cast<void*>(const_cast< ShareDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OCC::ShareDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
