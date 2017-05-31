/****************************************************************************
** Meta object code from reading C++ file 'protocolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/protocolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ProtocolWidget_t {
    QByteArrayData data[15];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProtocolWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProtocolWidget_t qt_meta_stringdata_OCC__ProtocolWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::ProtocolWidget"
QT_MOC_LITERAL(1, 20, 15), // "copyToClipboard"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "issueItemCountUpdated"
QT_MOC_LITERAL(4, 59, 16), // "slotProgressInfo"
QT_MOC_LITERAL(5, 76, 6), // "folder"
QT_MOC_LITERAL(6, 83, 12), // "ProgressInfo"
QT_MOC_LITERAL(7, 96, 8), // "progress"
QT_MOC_LITERAL(8, 105, 17), // "slotItemCompleted"
QT_MOC_LITERAL(9, 123, 12), // "SyncFileItem"
QT_MOC_LITERAL(10, 136, 4), // "item"
QT_MOC_LITERAL(11, 141, 13), // "PropagatorJob"
QT_MOC_LITERAL(12, 155, 3), // "job"
QT_MOC_LITERAL(13, 159, 12), // "slotOpenFile"
QT_MOC_LITERAL(14, 172, 16) // "QTreeWidgetItem*"

    },
    "OCC::ProtocolWidget\0copyToClipboard\0"
    "\0issueItemCountUpdated\0slotProgressInfo\0"
    "folder\0ProgressInfo\0progress\0"
    "slotItemCompleted\0SyncFileItem\0item\0"
    "PropagatorJob\0job\0slotOpenFile\0"
    "QTreeWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProtocolWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   43,    2, 0x0a /* Public */,
       8,    3,   48,    2, 0x0a /* Public */,
      13,    2,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 11,    5,   10,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   10,    2,

       0        // eod
};

void OCC::ProtocolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProtocolWidget *_t = static_cast<ProtocolWidget *>(_o);
        switch (_id) {
        case 0: _t->copyToClipboard(); break;
        case 1: _t->issueItemCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotProgressInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ProgressInfo(*)>(_a[2]))); break;
        case 3: _t->slotItemCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SyncFileItem(*)>(_a[2])),(*reinterpret_cast< const PropagatorJob(*)>(_a[3]))); break;
        case 4: _t->slotOpenFile((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProtocolWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtocolWidget::copyToClipboard)) {
                *result = 0;
            }
        }
        {
            typedef void (ProtocolWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtocolWidget::issueItemCountUpdated)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ProtocolWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OCC__ProtocolWidget.data,
      qt_meta_data_OCC__ProtocolWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ProtocolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProtocolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProtocolWidget.stringdata))
        return static_cast<void*>(const_cast< ProtocolWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OCC::ProtocolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OCC::ProtocolWidget::copyToClipboard()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::ProtocolWidget::issueItemCountUpdated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
