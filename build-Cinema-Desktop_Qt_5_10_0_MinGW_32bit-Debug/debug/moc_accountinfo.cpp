/****************************************************************************
** Meta object code from reading C++ file 'accountinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cinema/accountinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accountinfo_t {
    QByteArrayData data[11];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Accountinfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Accountinfo_t qt_meta_stringdata_Accountinfo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Accountinfo"
QT_MOC_LITERAL(1, 12, 11), // "firstWindow"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 26), // "on_pushButton_Save_clicked"
QT_MOC_LITERAL(4, 52, 26), // "on_pushButton_Edit_clicked"
QT_MOC_LITERAL(5, 79, 28), // "on_pushButton_Delete_clicked"
QT_MOC_LITERAL(6, 108, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 132, 30), // "on_pushButton_load_tab_clicked"
QT_MOC_LITERAL(8, 163, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(9, 195, 4), // "arg1"
QT_MOC_LITERAL(10, 200, 21) // "on_pushButton_clicked"

    },
    "Accountinfo\0firstWindow\0\0"
    "on_pushButton_Save_clicked\0"
    "on_pushButton_Edit_clicked\0"
    "on_pushButton_Delete_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_load_tab_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accountinfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void Accountinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Accountinfo *_t = static_cast<Accountinfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_pushButton_Save_clicked(); break;
        case 2: _t->on_pushButton_Edit_clicked(); break;
        case 3: _t->on_pushButton_Delete_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_load_tab_clicked(); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Accountinfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accountinfo::firstWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Accountinfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Accountinfo.data,
      qt_meta_data_Accountinfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Accountinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accountinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accountinfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Accountinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Accountinfo::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
