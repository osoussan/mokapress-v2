/****************************************************************************
** Meta object code from reading C++ file 'logbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/logbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__LogWidget_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LogWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LogWidget_t qt_meta_stringdata_OCC__LogWidget = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OCC::LogWidget"

    },
    "OCC::LogWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LogWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCC::LogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::LogWidget::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_OCC__LogWidget.data,
      qt_meta_data_OCC__LogWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::LogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LogWidget.stringdata))
        return static_cast<void*>(const_cast< LogWidget*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int OCC::LogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OCC__LogBrowser_t {
    QByteArrayData data[8];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LogBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LogBrowser_t qt_meta_stringdata_OCC__LogBrowser = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::LogBrowser"
QT_MOC_LITERAL(1, 16, 10), // "slotNewLog"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "msg"
QT_MOC_LITERAL(4, 32, 8), // "slotFind"
QT_MOC_LITERAL(5, 41, 6), // "search"
QT_MOC_LITERAL(6, 48, 8), // "slotSave"
QT_MOC_LITERAL(7, 57, 12) // "slotClearLog"

    },
    "OCC::LogBrowser\0slotNewLog\0\0msg\0"
    "slotFind\0search\0slotSave\0slotClearLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LogBrowser[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    0,   42,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,
       6,    0,   46,    2, 0x09 /* Protected */,
       7,    0,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::LogBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogBrowser *_t = static_cast<LogBrowser *>(_o);
        switch (_id) {
        case 0: _t->slotNewLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotFind(); break;
        case 2: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotSave(); break;
        case 4: _t->slotClearLog(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::LogBrowser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OCC__LogBrowser.data,
      qt_meta_data_OCC__LogBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::LogBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LogBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LogBrowser.stringdata))
        return static_cast<void*>(const_cast< LogBrowser*>(this));
    return QDialog::qt_metacast(_clname);
}

int OCC::LogBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
