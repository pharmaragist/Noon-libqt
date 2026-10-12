noon_setup(noon_widgets Noon.Widgets
    SOURCES
        ImageDecoder.hpp
        CursorImage.hpp
    QT_COMPONENTS
        Core Gui Qml Quick Network
    LINK
        Qt6::Core
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
        Qt6::Network
    PKG_CHECK
        XCURSOR xcursor
)
