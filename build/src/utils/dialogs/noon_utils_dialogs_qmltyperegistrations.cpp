/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<font_dialog.hpp>)
#  include <font_dialog.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Utils_Dialogs()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<FontDialog>("Noon.Utils.Dialogs", 1);
    QT_WARNING_POP
    qmlRegisterModule("Noon.Utils.Dialogs", 1, 0);
}

static const QQmlModuleRegistration noonUtilsDialogsRegistration("Noon.Utils.Dialogs", qml_register_types_Noon_Utils_Dialogs);
