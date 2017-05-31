/****************************************************************************
** Meta object code from reading C++ file 'folderwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/folderwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__FormatWarningsWizardPage_t {
    QByteArrayData data[1];
    char stringdata[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FormatWarningsWizardPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FormatWarningsWizardPage_t qt_meta_stringdata_OCC__FormatWarningsWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 29) // "OCC::FormatWarningsWizardPage"

    },
    "OCC::FormatWarningsWizardPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FormatWarningsWizardPage[] = {

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

void OCC::FormatWarningsWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::FormatWarningsWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_OCC__FormatWarningsWizardPage.data,
      qt_meta_data_OCC__FormatWarningsWizardPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FormatWarningsWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FormatWarningsWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FormatWarningsWizardPage.stringdata))
        return static_cast<void*>(const_cast< FormatWarningsWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FormatWarningsWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizardLocalPath_t {
    QByteArrayData data[3];
    char stringdata[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardLocalPath_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardLocalPath_t qt_meta_stringdata_OCC__FolderWizardLocalPath = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::FolderWizardLocalPath"
QT_MOC_LITERAL(1, 27, 21), // "slotChooseLocalFolder"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "OCC::FolderWizardLocalPath\0"
    "slotChooseLocalFolder\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardLocalPath[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::FolderWizardLocalPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderWizardLocalPath *_t = static_cast<FolderWizardLocalPath *>(_o);
        switch (_id) {
        case 0: _t->slotChooseLocalFolder(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::FolderWizardLocalPath::staticMetaObject = {
    { &FormatWarningsWizardPage::staticMetaObject, qt_meta_stringdata_OCC__FolderWizardLocalPath.data,
      qt_meta_data_OCC__FolderWizardLocalPath,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FolderWizardLocalPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardLocalPath::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardLocalPath.stringdata))
        return static_cast<void*>(const_cast< FolderWizardLocalPath*>(this));
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardLocalPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizardRemotePath_t {
    QByteArrayData data[23];
    char stringdata[416];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardRemotePath_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardRemotePath_t qt_meta_stringdata_OCC__FolderWizardRemotePath = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OCC::FolderWizardRemotePath"
QT_MOC_LITERAL(1, 28, 8), // "showWarn"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "slotAddRemoteFolder"
QT_MOC_LITERAL(4, 58, 22), // "slotCreateRemoteFolder"
QT_MOC_LITERAL(5, 81, 30), // "slotCreateRemoteFolderFinished"
QT_MOC_LITERAL(6, 112, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(7, 140, 5), // "error"
QT_MOC_LITERAL(8, 146, 27), // "slotHandleMkdirNetworkError"
QT_MOC_LITERAL(9, 174, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 189, 27), // "slotHandleLsColNetworkError"
QT_MOC_LITERAL(11, 217, 21), // "slotUpdateDirectories"
QT_MOC_LITERAL(12, 239, 18), // "slotRefreshFolders"
QT_MOC_LITERAL(13, 258, 16), // "slotItemExpanded"
QT_MOC_LITERAL(14, 275, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 292, 22), // "slotCurrentItemChanged"
QT_MOC_LITERAL(16, 315, 21), // "slotFolderEntryEdited"
QT_MOC_LITERAL(17, 337, 4), // "text"
QT_MOC_LITERAL(18, 342, 20), // "slotLsColFolderEntry"
QT_MOC_LITERAL(19, 363, 18), // "slotTypedPathFound"
QT_MOC_LITERAL(20, 382, 8), // "subpaths"
QT_MOC_LITERAL(21, 391, 18), // "slotTypedPathError"
QT_MOC_LITERAL(22, 410, 5) // "reply"

    },
    "OCC::FolderWizardRemotePath\0showWarn\0"
    "\0slotAddRemoteFolder\0slotCreateRemoteFolder\0"
    "slotCreateRemoteFolderFinished\0"
    "QNetworkReply::NetworkError\0error\0"
    "slotHandleMkdirNetworkError\0QNetworkReply*\0"
    "slotHandleLsColNetworkError\0"
    "slotUpdateDirectories\0slotRefreshFolders\0"
    "slotItemExpanded\0QTreeWidgetItem*\0"
    "slotCurrentItemChanged\0slotFolderEntryEdited\0"
    "text\0slotLsColFolderEntry\0slotTypedPathFound\0"
    "subpaths\0slotTypedPathError\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardRemotePath[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x09 /* Protected */,
       1,    0,   92,    2, 0x29 /* Protected | MethodCloned */,
       3,    0,   93,    2, 0x09 /* Protected */,
       4,    1,   94,    2, 0x09 /* Protected */,
       5,    1,   97,    2, 0x09 /* Protected */,
       8,    1,  100,    2, 0x09 /* Protected */,
      10,    1,  103,    2, 0x09 /* Protected */,
      11,    1,  106,    2, 0x09 /* Protected */,
      12,    0,  109,    2, 0x09 /* Protected */,
      13,    1,  110,    2, 0x09 /* Protected */,
      15,    1,  113,    2, 0x09 /* Protected */,
      16,    1,  116,    2, 0x09 /* Protected */,
      18,    0,  119,    2, 0x09 /* Protected */,
      19,    1,  120,    2, 0x09 /* Protected */,
      21,    1,  123,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void, 0x80000000 | 9,   22,

       0        // eod
};

void OCC::FolderWizardRemotePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderWizardRemotePath *_t = static_cast<FolderWizardRemotePath *>(_o);
        switch (_id) {
        case 0: _t->showWarn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showWarn(); break;
        case 2: _t->slotAddRemoteFolder(); break;
        case 3: _t->slotCreateRemoteFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotCreateRemoteFolderFinished((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->slotHandleMkdirNetworkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->slotHandleLsColNetworkError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->slotUpdateDirectories((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->slotRefreshFolders(); break;
        case 9: _t->slotItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->slotCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->slotFolderEntryEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotLsColFolderEntry(); break;
        case 13: _t->slotTypedPathFound((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 14: _t->slotTypedPathError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OCC::FolderWizardRemotePath::staticMetaObject = {
    { &FormatWarningsWizardPage::staticMetaObject, qt_meta_stringdata_OCC__FolderWizardRemotePath.data,
      qt_meta_data_OCC__FolderWizardRemotePath,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FolderWizardRemotePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardRemotePath::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardRemotePath.stringdata))
        return static_cast<void*>(const_cast< FolderWizardRemotePath*>(this));
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardRemotePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t {
    QByteArrayData data[1];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizardSelectiveSync_t qt_meta_stringdata_OCC__FolderWizardSelectiveSync = {
    {
QT_MOC_LITERAL(0, 0, 30) // "OCC::FolderWizardSelectiveSync"

    },
    "OCC::FolderWizardSelectiveSync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizardSelectiveSync[] = {

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

void OCC::FolderWizardSelectiveSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::FolderWizardSelectiveSync::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_OCC__FolderWizardSelectiveSync.data,
      qt_meta_data_OCC__FolderWizardSelectiveSync,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FolderWizardSelectiveSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardSelectiveSync::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizardSelectiveSync.stringdata))
        return static_cast<void*>(const_cast< FolderWizardSelectiveSync*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardSelectiveSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OCC__FolderWizard_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__FolderWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__FolderWizard_t qt_meta_stringdata_OCC__FolderWizard = {
    {
QT_MOC_LITERAL(0, 0, 17) // "OCC::FolderWizard"

    },
    "OCC::FolderWizard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__FolderWizard[] = {

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

void OCC::FolderWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::FolderWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_OCC__FolderWizard.data,
      qt_meta_data_OCC__FolderWizard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::FolderWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__FolderWizard.stringdata))
        return static_cast<void*>(const_cast< FolderWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int OCC::FolderWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
