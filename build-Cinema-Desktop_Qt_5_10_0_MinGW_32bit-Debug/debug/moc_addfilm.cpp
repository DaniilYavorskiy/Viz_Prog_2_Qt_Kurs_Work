/****************************************************************************
** Meta object code from reading C++ file 'addfilm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cinema/addfilm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfilm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddFilm_t {
    QByteArrayData data[11];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddFilm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddFilm_t qt_meta_stringdata_AddFilm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AddFilm"
QT_MOC_LITERAL(1, 8, 11), // "firstWindow"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "secondWindow"
QT_MOC_LITERAL(4, 34, 8), // "sendData"
QT_MOC_LITERAL(5, 43, 3), // "str"
QT_MOC_LITERAL(6, 47, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 69, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 93, 15), // "on_Load_clicked"
QT_MOC_LITERAL(9, 109, 25), // "on_pushButton_Add_clicked"
QT_MOC_LITERAL(10, 135, 27) // "on_pushButton_clear_clicked"

    },
    "AddFilm\0firstWindow\0\0secondWindow\0"
    "sendData\0str\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked\0on_Load_clicked\0"
    "on_pushButton_Add_clicked\0"
    "on_pushButton_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddFilm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddFilm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddFilm *_t = static_cast<AddFilm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->secondWindow(); break;
        case 2: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_Load_clicked(); break;
        case 6: _t->on_pushButton_Add_clicked(); break;
        case 7: _t->on_pushButton_clear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddFilm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddFilm::firstWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddFilm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddFilm::secondWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddFilm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddFilm::sendData)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AddFilm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddFilm.data,
      qt_meta_data_AddFilm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddFilm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddFilm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddFilm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddFilm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AddFilm::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddFilm::secondWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddFilm::sendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
