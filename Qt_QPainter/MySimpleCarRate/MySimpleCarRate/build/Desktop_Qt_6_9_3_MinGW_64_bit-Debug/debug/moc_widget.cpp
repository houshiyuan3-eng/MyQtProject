/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto Widget::qt_create_metaobjectdata<qt_meta_tag_ZN6WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Widget",
        "AutoRun",
        "",
        "initCanvas",
        "QPainter&",
        "painter",
        "MakeEllipse",
        "radical",
        "MakeCarBody",
        "startAngle",
        "angle",
        "MakePointer",
        "MakeRate",
        "MakeNowRate",
        "painte",
        "MakeMidBlack",
        "color",
        "MakeMidBin",
        "MakeLogo"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'AutoRun'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initCanvas'
        QtMocHelpers::SlotData<void(QPainter &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'MakeEllipse'
        QtMocHelpers::SlotData<void(QPainter &, int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakeCarBody'
        QtMocHelpers::SlotData<void(QPainter &, int, int, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakePointer'
        QtMocHelpers::SlotData<void(QPainter &, int, int, int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakeRate'
        QtMocHelpers::SlotData<void(QPainter &, int, int, int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakeNowRate'
        QtMocHelpers::SlotData<void(QPainter &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 14 },
        }}),
        // Slot 'MakeMidBlack'
        QtMocHelpers::SlotData<void(QPainter &, QColor, int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QColor, 16 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakeMidBin'
        QtMocHelpers::SlotData<void(QPainter &, int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'MakeLogo'
        QtMocHelpers::SlotData<void(QPainter &, int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Widget, qt_meta_tag_ZN6WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6WidgetE_t>.metaTypes,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->AutoRun(); break;
        case 1: _t->initCanvas((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1]))); break;
        case 2: _t->MakeEllipse((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->MakeCarBody((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 4: _t->MakePointer((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 5: _t->MakeRate((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 6: _t->MakeNowRate((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1]))); break;
        case 7: _t->MakeMidBlack((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->MakeMidBin((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->MakeLogo((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
