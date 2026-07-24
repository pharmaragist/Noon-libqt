/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<LatexRenderer.hpp>)
#  include <LatexRenderer.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Utils_Latex()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<LatexRenderer>("Noon.Utils.Latex", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("Noon.Utils.Latex", 1);
    QT_WARNING_POP
    qmlRegisterModule("Noon.Utils.Latex", 1, 0);
}

static const QQmlModuleRegistration noonUtilsLatexRegistration("Noon.Utils.Latex", qml_register_types_Noon_Utils_Latex);
