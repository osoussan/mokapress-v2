/****************************************************************************
** Meta object code from reading C++ file 'CrashReporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CrashReporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CrashReporter_t {
    QByteArrayData data[11];
    char stringdata[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CrashReporter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CrashReporter_t qt_meta_stringdata_CrashReporter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CrashReporter"
QT_MOC_LITERAL(1, 14, 4), // "send"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "onDone"
QT_MOC_LITERAL(4, 27, 10), // "onProgress"
QT_MOC_LITERAL(5, 38, 4), // "done"
QT_MOC_LITERAL(6, 43, 5), // "total"
QT_MOC_LITERAL(7, 49, 6), // "onFail"
QT_MOC_LITERAL(8, 56, 5), // "error"
QT_MOC_LITERAL(9, 62, 11), // "errorString"
QT_MOC_LITERAL(10, 74, 12) // "onSendButton"

    },
    "CrashReporter\0send\0\0onDone\0onProgress\0"
    "done\0total\0onFail\0error\0errorString\0"
    "onSendButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CrashReporter[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    2,   41,    2, 0x08 /* Private */,
       7,    2,   46,    2, 0x08 /* Private */,
      10,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void,

       0        // eod
};

void CrashReporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CrashReporter *_t = static_cast<CrashReporter *>(_o);
        switch (_id) {
        case 0: _t->send(); break;
        case 1: _t->onDone(); break;
        case 2: _t->onProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->onFail((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onSendButton(); break;
        default: ;
        }
    }
}

const QMetaObject CrashReporter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CrashReporter.data,
      qt_meta_data_CrashReporter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CrashReporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CrashReporter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CrashReporter.stringdata))
        return static_cast<void*>(const_cast< CrashReporter*>(this));
    return QDialog::qt_metacast(_clname);
}

int CrashReporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
