/****************************************************************************
** Meta object code from reading C++ file 'highlighter.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/utils/highlighter.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'highlighter.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN15JsonHighlighterE_t {};
} // unnamed namespace

template <> constexpr inline auto JsonHighlighter::qt_create_metaobjectdata<qt_meta_tag_ZN15JsonHighlighterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "JsonHighlighter",
        "QML.Element",
        "textDocumentChanged",
        "",
        "colorsChanged",
        "textDocument",
        "QQuickTextDocument*",
        "keyColor",
        "QColor",
        "stringColor",
        "numberColor",
        "boolColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'textDocumentChanged'
        QtMocHelpers::SignalData<void()>(2, 3, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorsChanged'
        QtMocHelpers::SignalData<void()>(4, 3, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'textDocument'
        QtMocHelpers::PropertyData<QQuickTextDocument*>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'keyColor'
        QtMocHelpers::PropertyData<QColor>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'stringColor'
        QtMocHelpers::PropertyData<QColor>(9, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'numberColor'
        QtMocHelpers::PropertyData<QColor>(10, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'boolColor'
        QtMocHelpers::PropertyData<QColor>(11, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    0 },
    });
    return QtMocHelpers::metaObjectData<JsonHighlighter, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject JsonHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15JsonHighlighterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15JsonHighlighterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15JsonHighlighterE_t>.metaTypes,
    nullptr
} };

void JsonHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JsonHighlighter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textDocumentChanged(); break;
        case 1: _t->colorsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (JsonHighlighter::*)()>(_a, &JsonHighlighter::textDocumentChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (JsonHighlighter::*)()>(_a, &JsonHighlighter::colorsChanged, 1))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickTextDocument* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQuickTextDocument**>(_v) = _t->textDocument(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->keyColor(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->stringColor(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->numberColor(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->boolColor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextDocument(*reinterpret_cast<QQuickTextDocument**>(_v)); break;
        case 1: _t->setKeyColor(*reinterpret_cast<QColor*>(_v)); break;
        case 2: _t->setStringColor(*reinterpret_cast<QColor*>(_v)); break;
        case 3: _t->setNumberColor(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setBoolColor(*reinterpret_cast<QColor*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *JsonHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15JsonHighlighterE_t>.strings))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int JsonHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void JsonHighlighter::textDocumentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JsonHighlighter::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
