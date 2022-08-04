/****************************************************************************
** Meta object code from reading C++ file 'parsedxf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../parsedxf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parsedxf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_parseDXF_t {
    QByteArrayData data[22];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_parseDXF_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_parseDXF_t qt_meta_stringdata_parseDXF = {
    {
QT_MOC_LITERAL(0, 0, 8), // "parseDXF"
QT_MOC_LITERAL(1, 9, 16), // "outputWorkPoints"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 34), // "QSharedPointer<QVector<shapeM..."
QT_MOC_LITERAL(4, 62, 7), // "openDXF"
QT_MOC_LITERAL(5, 70, 12), // "drawSortPath"
QT_MOC_LITERAL(6, 83, 21), // "on_listWidget_clicked"
QT_MOC_LITERAL(7, 105, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 117, 5), // "index"
QT_MOC_LITERAL(9, 123, 40), // "on_listWidget_customContextMe..."
QT_MOC_LITERAL(10, 164, 3), // "pos"
QT_MOC_LITERAL(11, 168, 12), // "turnDirShape"
QT_MOC_LITERAL(12, 181, 15), // "clearListWidget"
QT_MOC_LITERAL(13, 197, 11), // "deleteShape"
QT_MOC_LITERAL(14, 209, 11), // "moveUpShape"
QT_MOC_LITERAL(15, 221, 13), // "moveDownShape"
QT_MOC_LITERAL(16, 235, 11), // "refreshView"
QT_MOC_LITERAL(17, 247, 12), // "showSortPath"
QT_MOC_LITERAL(18, 260, 11), // "outputShape"
QT_MOC_LITERAL(19, 272, 14), // "updateProgress"
QT_MOC_LITERAL(20, 287, 5), // "value"
QT_MOC_LITERAL(21, 293, 11) // "iscompleted"

    },
    "parseDXF\0outputWorkPoints\0\0"
    "QSharedPointer<QVector<shapeMsg> >\0"
    "openDXF\0drawSortPath\0on_listWidget_clicked\0"
    "QModelIndex\0index\0"
    "on_listWidget_customContextMenuRequested\0"
    "pos\0turnDirShape\0clearListWidget\0"
    "deleteShape\0moveUpShape\0moveDownShape\0"
    "refreshView\0showSortPath\0outputShape\0"
    "updateProgress\0value\0iscompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_parseDXF[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    2,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   20,   21,

       0        // eod
};

void parseDXF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<parseDXF *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputWorkPoints((*reinterpret_cast< QSharedPointer<QVector<shapeMsg> >(*)>(_a[1]))); break;
        case 1: _t->openDXF(); break;
        case 2: _t->drawSortPath(); break;
        case 3: _t->on_listWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->turnDirShape(); break;
        case 6: _t->clearListWidget(); break;
        case 7: _t->deleteShape(); break;
        case 8: _t->moveUpShape(); break;
        case 9: _t->moveDownShape(); break;
        case 10: _t->refreshView(); break;
        case 11: _t->showSortPath(); break;
        case 12: _t->outputShape(); break;
        case 13: _t->updateProgress((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (parseDXF::*)(QSharedPointer<QVector<shapeMsg>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&parseDXF::outputWorkPoints)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject parseDXF::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_parseDXF.data,
    qt_meta_data_parseDXF,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *parseDXF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *parseDXF::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_parseDXF.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int parseDXF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void parseDXF::outputWorkPoints(QSharedPointer<QVector<shapeMsg>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
