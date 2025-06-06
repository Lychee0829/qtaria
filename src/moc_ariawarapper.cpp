/****************************************************************************
** Meta object code from reading C++ file 'ariawarapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ariawarapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ariawarapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ariawarapper_t {
    QByteArrayData data[19];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ariawarapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ariawarapper_t qt_meta_stringdata_ariawarapper = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ariawarapper"
QT_MOC_LITERAL(1, 13, 18), // "globalDownloadStat"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "inactive"
QT_MOC_LITERAL(4, 42, 6), // "active"
QT_MOC_LITERAL(5, 49, 3), // "gdl"
QT_MOC_LITERAL(6, 53, 3), // "gup"
QT_MOC_LITERAL(7, 57, 19), // "downloadStatPerItem"
QT_MOC_LITERAL(8, 77, 2), // "id"
QT_MOC_LITERAL(9, 80, 9), // "completed"
QT_MOC_LITERAL(10, 90, 5), // "total"
QT_MOC_LITERAL(11, 96, 5), // "perDl"
QT_MOC_LITERAL(12, 102, 5), // "perUp"
QT_MOC_LITERAL(13, 108, 12), // "finishAddNew"
QT_MOC_LITERAL(14, 121, 3), // "fid"
QT_MOC_LITERAL(15, 125, 6), // "update"
QT_MOC_LITERAL(16, 132, 14), // "addNewDownload"
QT_MOC_LITERAL(17, 147, 3), // "url"
QT_MOC_LITERAL(18, 151, 8) // "location"

    },
    "ariawarapper\0globalDownloadStat\0\0"
    "inactive\0active\0gdl\0gup\0downloadStatPerItem\0"
    "id\0completed\0total\0perDl\0perUp\0"
    "finishAddNew\0fid\0update\0addNewDownload\0"
    "url\0location"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ariawarapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
       7,    5,   48,    2, 0x06 /* Public */,
      13,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   62,    2, 0x0a /* Public */,
      16,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::UInt,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

       0        // eod
};

void ariawarapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ariawarapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->globalDownloadStat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->downloadStatPerItem((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->finishAddNew((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->update(); break;
        case 4: _t->addNewDownload((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ariawarapper::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ariawarapper::globalDownloadStat)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ariawarapper::*)(uint , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ariawarapper::downloadStatPerItem)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ariawarapper::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ariawarapper::finishAddNew)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ariawarapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ariawarapper.data,
    qt_meta_data_ariawarapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ariawarapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ariawarapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ariawarapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ariawarapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ariawarapper::globalDownloadStat(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ariawarapper::downloadStatPerItem(uint _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ariawarapper::finishAddNew(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
