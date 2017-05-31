/****************************************************************************
** Meta object code from reading C++ file 'shareusergroupwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/shareusergroupwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shareusergroupwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ShareWidget_t {
    QByteArrayData data[12];
    char stringdata[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareWidget_t qt_meta_stringdata_OCC__ShareWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::ShareWidget"
QT_MOC_LITERAL(1, 17, 12), // "shareDeleted"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "ShareWidget*"
QT_MOC_LITERAL(4, 44, 5), // "share"
QT_MOC_LITERAL(5, 50, 15), // "resizeRequested"
QT_MOC_LITERAL(6, 66, 28), // "on_deleteShareButton_clicked"
QT_MOC_LITERAL(7, 95, 22), // "slotPermissionsChanged"
QT_MOC_LITERAL(8, 118, 26), // "slotEditPermissionsChanged"
QT_MOC_LITERAL(9, 145, 27), // "slotDeleteAnimationFinished"
QT_MOC_LITERAL(10, 173, 16), // "slotShareDeleted"
QT_MOC_LITERAL(11, 190, 18) // "slotPermissionsSet"

    },
    "OCC::ShareWidget\0shareDeleted\0\0"
    "ShareWidget*\0share\0resizeRequested\0"
    "on_deleteShareButton_clicked\0"
    "slotPermissionsChanged\0"
    "slotEditPermissionsChanged\0"
    "slotDeleteAnimationFinished\0"
    "slotShareDeleted\0slotPermissionsSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::ShareWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShareWidget *_t = static_cast<ShareWidget *>(_o);
        switch (_id) {
        case 0: _t->shareDeleted((*reinterpret_cast< ShareWidget*(*)>(_a[1]))); break;
        case 1: _t->resizeRequested(); break;
        case 2: _t->on_deleteShareButton_clicked(); break;
        case 3: _t->slotPermissionsChanged(); break;
        case 4: _t->slotEditPermissionsChanged(); break;
        case 5: _t->slotDeleteAnimationFinished(); break;
        case 6: _t->slotShareDeleted(); break;
        case 7: _t->slotPermissionsSet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ShareWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShareWidget::*_t)(ShareWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareWidget::shareDeleted)) {
                *result = 0;
            }
        }
        {
            typedef void (ShareWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareWidget::resizeRequested)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ShareWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OCC__ShareWidget.data,
      qt_meta_data_OCC__ShareWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShareWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareWidget.stringdata))
        return static_cast<void*>(const_cast< ShareWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OCC::ShareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShareWidget::shareDeleted(ShareWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ShareWidget::resizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__ShareUserGroupWidget_t {
    QByteArrayData data[19];
    char stringdata[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareUserGroupWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareUserGroupWidget_t qt_meta_stringdata_OCC__ShareUserGroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::ShareUserGroupWidget"
QT_MOC_LITERAL(1, 26, 9), // "getShares"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "slotSharesFetched"
QT_MOC_LITERAL(4, 55, 29), // "QList<QSharedPointer<Share> >"
QT_MOC_LITERAL(5, 85, 6), // "shares"
QT_MOC_LITERAL(6, 92, 29), // "on_shareeLineEdit_textChanged"
QT_MOC_LITERAL(7, 122, 4), // "text"
QT_MOC_LITERAL(8, 127, 16), // "searchForSharees"
QT_MOC_LITERAL(9, 144, 22), // "slotLineEditTextEdited"
QT_MOC_LITERAL(10, 167, 18), // "slotLineEditReturn"
QT_MOC_LITERAL(11, 186, 22), // "slotCompleterActivated"
QT_MOC_LITERAL(12, 209, 5), // "index"
QT_MOC_LITERAL(13, 215, 24), // "slotCompleterHighlighted"
QT_MOC_LITERAL(14, 240, 16), // "slotShareesReady"
QT_MOC_LITERAL(15, 257, 26), // "slotAdjustScrollWidgetSize"
QT_MOC_LITERAL(16, 284, 12), // "displayError"
QT_MOC_LITERAL(17, 297, 4), // "code"
QT_MOC_LITERAL(18, 302, 7) // "message"

    },
    "OCC::ShareUserGroupWidget\0getShares\0"
    "\0slotSharesFetched\0QList<QSharedPointer<Share> >\0"
    "shares\0on_shareeLineEdit_textChanged\0"
    "text\0searchForSharees\0slotLineEditTextEdited\0"
    "slotLineEditReturn\0slotCompleterActivated\0"
    "index\0slotCompleterHighlighted\0"
    "slotShareesReady\0slotAdjustScrollWidgetSize\0"
    "displayError\0code\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareUserGroupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    2,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   18,

       0        // eod
};

void OCC::ShareUserGroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShareUserGroupWidget *_t = static_cast<ShareUserGroupWidget *>(_o);
        switch (_id) {
        case 0: _t->getShares(); break;
        case 1: _t->slotSharesFetched((*reinterpret_cast< const QList<QSharedPointer<Share> >(*)>(_a[1]))); break;
        case 2: _t->on_shareeLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->searchForSharees(); break;
        case 4: _t->slotLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotLineEditReturn(); break;
        case 6: _t->slotCompleterActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->slotCompleterHighlighted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->slotShareesReady(); break;
        case 9: _t->slotAdjustScrollWidgetSize(); break;
        case 10: _t->displayError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::ShareUserGroupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OCC__ShareUserGroupWidget.data,
      qt_meta_data_OCC__ShareUserGroupWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShareUserGroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareUserGroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareUserGroupWidget.stringdata))
        return static_cast<void*>(const_cast< ShareUserGroupWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OCC::ShareUserGroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
