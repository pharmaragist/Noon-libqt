add_subdirectory(qrcodegen)

noon_setup(qrcode Noon.Utils.Qr
    SOURCES
        QrCode.hpp
        QrCode.cpp
    QT_COMPONENTS
        Core Gui Qml Quick Svg
    LINK
        Qt6::Core
        Qt6::Gui
        Qt6::Quick
        Qt6::Svg
        qrcodegen
)

if(QRSUPPORT)
    target_compile_definitions(qrcode PUBLIC QRSUPPORT)
endif()
