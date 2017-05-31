/****************************************************************************
** Meta object code from reading C++ file 'selectivesyncdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/selectivesyncdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectivesyncdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SelectiveSyncTreeView_t {
    QByteArrayData data[8];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SelectiveSyncTreeView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SelectiveSyncTreeView_t qt_meta_stringdata_OCC__SelectiveSyncTreeView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::SelectiveSyncTreeView"
QT_MOC_LITERAL(1, 27, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "slotItemExpanded"
QT_MOC_LITERAL(4, 67, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 84, 15), // "slotItemChanged"
QT_MOC_LITERAL(6, 100, 26), // "slotLscolFinishedWithError"
QT_MOC_LITERAL(7, 127, 14) // "QNetworkReply*"

    },
    "OCC::SelectiveSyncTreeView\0"
    "slotUpdateDirectories\0\0slotItemExpanded\0"
    "QTreeWidgetItem*\0slotItemChanged\0"
    "slotLscolFinishedWithError\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SelectiveSyncTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       3,    1,   37,    2, 0x08 /* Private */,
       5,    2,   40,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void OCC::SelectiveSyncTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectiveSyncTreeView *_t = static_cast<SelectiveSyncTreeView *>(_o);
        switch (_id) {
        case 0: _t->slotUpdateDirectories((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->slotItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->slotItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotLscolFinishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::SelectiveSyncTreeView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_OCC__SelectiveSyncTreeView.data,
      qt_meta_data_OCC__SelectiveSyncTreeView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SelectiveSyncTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SelectiveSyncTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SelectiveSyncTreeView.stringdata))
        return static_cast<void*>(const_cast< SelectiveSyncTreeView*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int OCC::SelectiveSyncTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__SelectiveSyncDialog_t {
    QByteArrayData data[1];
    char stringdata[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SelectiveSyncDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SelectiveSyncDialog_t qt_meta_stringdata_OCC__SelectiveSyncDialog = {
    {
QT_MOC_LITERAL(0, 0, 24) // "OCC::SelectiveSyncDialog"

    },
    "OCC::SelectiveSyncDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SelectiveSyncDialog[] = {

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

void OCC::SelectiveSyncDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::SelectiveSyncDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OCC__SelectiveSyncDialog.data,
      qt_meta_data_OCC__SelectiveSyncDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SelectiveSyncDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SelectiveSyncDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SelectiveSyncDialog.stringdata))
        return static_cast<void*>(const_cast< SelectiveSyncDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OCC::SelectiveSyncDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
