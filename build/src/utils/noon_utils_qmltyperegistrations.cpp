/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<cava_watcher.hpp>)
#  include <cava_watcher.hpp>
#endif
#if __has_include(<highlighter.hpp>)
#  include <highlighter.hpp>
#endif
#if __has_include(<hyprparser.hpp>)
#  include <hyprparser.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Utils()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<CavaWatcher>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<HyprParser>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<JsonHighlighter>("Noon.Utils", 1);
    QMetaType::fromType<QSyntaxHighlighter *>().id();
    QT_WARNING_POP
    qmlRegisterModule("Noon.Utils", 1, 0);
}

static const QQmlModuleRegistration noonUtilsRegistration("Noon.Utils", qml_register_types_Noon_Utils);
