/****************************************************************************
** Meta object code from reading C++ file 'sharelinkwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/sharelinkwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharelinkwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ShareLinkWidget_t {
    QByteArrayData data[27];
    char stringdata[508];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareLinkWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareLinkWidget_t qt_meta_stringdata_OCC__ShareLinkWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::ShareLinkWidget"
QT_MOC_LITERAL(1, 21, 17), // "slotSharesFetched"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 29), // "QList<QSharedPointer<Share> >"
QT_MOC_LITERAL(4, 70, 6), // "shares"
QT_MOC_LITERAL(5, 77, 22), // "slotCreateShareFetched"
QT_MOC_LITERAL(6, 100, 25), // "QSharedPointer<LinkShare>"
QT_MOC_LITERAL(7, 126, 5), // "share"
QT_MOC_LITERAL(8, 132, 31), // "slotCreateShareRequiresPassword"
QT_MOC_LITERAL(9, 164, 7), // "message"
QT_MOC_LITERAL(10, 172, 22), // "slotDeleteShareFetched"
QT_MOC_LITERAL(11, 195, 15), // "slotPasswordSet"
QT_MOC_LITERAL(12, 211, 13), // "slotExpireSet"
QT_MOC_LITERAL(13, 225, 21), // "slotExpireDateChanged"
QT_MOC_LITERAL(14, 247, 4), // "date"
QT_MOC_LITERAL(15, 252, 28), // "slotCheckBoxShareLinkClicked"
QT_MOC_LITERAL(16, 281, 27), // "slotCheckBoxPasswordClicked"
QT_MOC_LITERAL(17, 309, 25), // "slotCheckBoxExpireClicked"
QT_MOC_LITERAL(18, 335, 25), // "slotPasswordReturnPressed"
QT_MOC_LITERAL(19, 361, 19), // "slotPasswordChanged"
QT_MOC_LITERAL(20, 381, 7), // "newText"
QT_MOC_LITERAL(21, 389, 29), // "slotPushButtonCopyLinkPressed"
QT_MOC_LITERAL(22, 419, 26), // "slotCheckBoxEditingClicked"
QT_MOC_LITERAL(23, 446, 19), // "slotPublicUploadSet"
QT_MOC_LITERAL(24, 466, 15), // "slotServerError"
QT_MOC_LITERAL(25, 482, 4), // "code"
QT_MOC_LITERAL(26, 487, 20) // "slotPasswordSetError"

    },
    "OCC::ShareLinkWidget\0slotSharesFetched\0"
    "\0QList<QSharedPointer<Share> >\0shares\0"
    "slotCreateShareFetched\0QSharedPointer<LinkShare>\0"
    "share\0slotCreateShareRequiresPassword\0"
    "message\0slotDeleteShareFetched\0"
    "slotPasswordSet\0slotExpireSet\0"
    "slotExpireDateChanged\0date\0"
    "slotCheckBoxShareLinkClicked\0"
    "slotCheckBoxPasswordClicked\0"
    "slotCheckBoxExpireClicked\0"
    "slotPasswordReturnPressed\0slotPasswordChanged\0"
    "newText\0slotPushButtonCopyLinkPressed\0"
    "slotCheckBoxEditingClicked\0"
    "slotPublicUploadSet\0slotServerError\0"
    "code\0slotPasswordSetError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareLinkWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       5,    1,  102,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    1,  111,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      21,    0,  121,    2, 0x08 /* Private */,
      22,    0,  122,    2, 0x08 /* Private */,
      23,    0,  123,    2, 0x08 /* Private */,
      24,    2,  124,    2, 0x08 /* Private */,
      26,    2,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   25,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   25,    9,

       0        // eod
};

void OCC::ShareLinkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShareLinkWidget *_t = static_cast<ShareLinkWidget *>(_o);
        switch (_id) {
        case 0: _t->slotSharesFetched((*reinterpret_cast< const QList<QSharedPointer<Share> >(*)>(_a[1]))); break;
        case 1: _t->slotCreateShareFetched((*reinterpret_cast< const QSharedPointer<LinkShare>(*)>(_a[1]))); break;
        case 2: _t->slotCreateShareRequiresPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotDeleteShareFetched(); break;
        case 4: _t->slotPasswordSet(); break;
        case 5: _t->slotExpireSet(); break;
        case 6: _t->slotExpireDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->slotCheckBoxShareLinkClicked(); break;
        case 8: _t->slotCheckBoxPasswordClicked(); break;
        case 9: _t->slotCheckBoxExpireClicked(); break;
        case 10: _t->slotPasswordReturnPressed(); break;
        case 11: _t->slotPasswordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotPushButtonCopyLinkPressed(); break;
        case 13: _t->slotCheckBoxEditingClicked(); break;
        case 14: _t->slotPublicUploadSet(); break;
        case 15: _t->slotServerError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->slotPasswordSetError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::ShareLinkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OCC__ShareLinkWidget.data,
      qt_meta_data_OCC__ShareLinkWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShareLinkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareLinkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareLinkWidget.stringdata))
        return static_cast<void*>(const_cast< ShareLinkWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OCC::ShareLinkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
