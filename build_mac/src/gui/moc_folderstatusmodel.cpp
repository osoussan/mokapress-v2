/****************************************************************************
** Meta object code from reading C++ file 'folderstatusmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/folderstatusmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderstatusmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__FolderStatusModel_t {
    QByteArrayData data[20];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderStatusModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderStatusModel_t qt_meta_stringdata_OCC__FolderStatusModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::FolderStatusModel"
QT_MOC_LITERAL(1, 23, 12), // "dirtyChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "suggestExpand"
QT_MOC_LITERAL(4, 51, 21), // "slotUpdateFolderState"
QT_MOC_LITERAL(5, 73, 7), // "Folder*"
QT_MOC_LITERAL(6, 81, 22), // "slotApplySelectiveSync"
QT_MOC_LITERAL(7, 104, 12), // "resetFolders"
QT_MOC_LITERAL(8, 117, 15), // "slotSetProgress"
QT_MOC_LITERAL(9, 133, 12), // "ProgressInfo"
QT_MOC_LITERAL(10, 146, 8), // "progress"
QT_MOC_LITERAL(11, 155, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(12, 177, 26), // "slotLscolFinishedWithError"
QT_MOC_LITERAL(13, 204, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 219, 1), // "r"
QT_MOC_LITERAL(15, 221, 25), // "slotFolderSyncStateChange"
QT_MOC_LITERAL(16, 247, 1), // "f"
QT_MOC_LITERAL(17, 249, 30), // "slotFolderScheduleQueueChanged"
QT_MOC_LITERAL(18, 280, 16), // "slotNewBigFolder"
QT_MOC_LITERAL(19, 297, 21) // "slotShowFetchProgress"

    },
    "OCC::FolderStatusModel\0dirtyChanged\0"
    "\0suggestExpand\0slotUpdateFolderState\0"
    "Folder*\0slotApplySelectiveSync\0"
    "resetFolders\0slotSetProgress\0ProgressInfo\0"
    "progress\0slotUpdateDirectories\0"
    "slotLscolFinishedWithError\0QNetworkReply*\0"
    "r\0slotFolderSyncStateChange\0f\0"
    "slotFolderScheduleQueueChanged\0"
    "slotNewBigFolder\0slotShowFetchProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderStatusModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   78,    2, 0x0a /* Public */,
       6,    0,   81,    2, 0x0a /* Public */,
       7,    0,   82,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,
      18,    0,   96,    2, 0x08 /* Private */,
      19,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 5,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::FolderStatusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderStatusModel *_t = static_cast<FolderStatusModel *>(_o);
        switch (_id) {
        case 0: _t->dirtyChanged(); break;
        case 1: _t->suggestExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->slotUpdateFolderState((*reinterpret_cast< Folder*(*)>(_a[1]))); break;
        case 3: _t->slotApplySelectiveSync(); break;
        case 4: _t->resetFolders(); break;
        case 5: _t->slotSetProgress((*reinterpret_cast< const ProgressInfo(*)>(_a[1]))); break;
        case 6: _t->slotUpdateDirectories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->slotLscolFinishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->slotFolderSyncStateChange((*reinterpret_cast< Folder*(*)>(_a[1]))); break;
        case 9: _t->slotFolderScheduleQueueChanged(); break;
        case 10: _t->slotNewBigFolder(); break;
        case 11: _t->slotShowFetchProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FolderStatusModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FolderStatusModel::dirtyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FolderStatusModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FolderStatusModel::suggestExpand)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::FolderStatusModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_OCC__FolderStatusModel.data,
      qt_meta_data_OCC__FolderStatusModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FolderStatusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderStatusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderStatusModel.stringdata))
        return static_cast<void*>(const_cast< FolderStatusModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int OCC::FolderStatusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderStatusModel::dirtyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::FolderStatusModel::suggestExpand(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
