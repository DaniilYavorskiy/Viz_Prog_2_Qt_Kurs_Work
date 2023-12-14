/****************************************************************************
** Meta object code from reading C++ file 'usercheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cinema/usercheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usercheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserCheck_t {
    QByteArrayData data[17];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserCheck_t qt_meta_stringdata_UserCheck = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UserCheck"
QT_MOC_LITERAL(1, 10, 11), // "firstWindow"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "registrationWindow"
QT_MOC_LITERAL(4, 42, 12), // "legendWindow"
QT_MOC_LITERAL(5, 55, 9), // "oneWindow"
QT_MOC_LITERAL(6, 65, 14), // "begyshiyWindow"
QT_MOC_LITERAL(7, 80, 10), // "marsWindow"
QT_MOC_LITERAL(8, 91, 11), // "malifWindow"
QT_MOC_LITERAL(9, 103, 10), // "girlWindow"
QT_MOC_LITERAL(10, 114, 13), // "kruellaWindow"
QT_MOC_LITERAL(11, 128, 10), // "fordWindow"
QT_MOC_LITERAL(12, 139, 10), // "luciWindow"
QT_MOC_LITERAL(13, 150, 12), // "dyavolWindow"
QT_MOC_LITERAL(14, 163, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 185, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(16, 209, 23) // "on_pushButton_3_clicked"

    },
    "UserCheck\0firstWindow\0\0registrationWindow\0"
    "legendWindow\0oneWindow\0begyshiyWindow\0"
    "marsWindow\0malifWindow\0girlWindow\0"
    "kruellaWindow\0fordWindow\0luciWindow\0"
    "dyavolWindow\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,
      10,    0,   97,    2, 0x06 /* Public */,
      11,    0,   98,    2, 0x06 /* Public */,
      12,    0,   99,    2, 0x06 /* Public */,
      13,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserCheck *_t = static_cast<UserCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->registrationWindow(); break;
        case 2: _t->legendWindow(); break;
        case 3: _t->oneWindow(); break;
        case 4: _t->begyshiyWindow(); break;
        case 5: _t->marsWindow(); break;
        case 6: _t->malifWindow(); break;
        case 7: _t->girlWindow(); break;
        case 8: _t->kruellaWindow(); break;
        case 9: _t->fordWindow(); break;
        case 10: _t->luciWindow(); break;
        case 11: _t->dyavolWindow(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_2_clicked(); break;
        case 14: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::firstWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::registrationWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::legendWindow)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::oneWindow)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::begyshiyWindow)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::marsWindow)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::malifWindow)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::girlWindow)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::kruellaWindow)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::fordWindow)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::luciWindow)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (UserCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::dyavolWindow)) {
                *result = 11;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UserCheck::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserCheck.data,
      qt_meta_data_UserCheck,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserCheck.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UserCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void UserCheck::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserCheck::registrationWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserCheck::legendWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserCheck::oneWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UserCheck::begyshiyWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UserCheck::marsWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UserCheck::malifWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UserCheck::girlWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void UserCheck::kruellaWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void UserCheck::fordWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UserCheck::luciWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void UserCheck::dyavolWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
