option(QRSUPPORT "Compile QR support as the Noon.Utils.Qr QML module" OFF)
option(NVIDIA "Enable NVIDIA GPU detection support (requires NVML)" OFF)

noon_setup(noon_utils Noon.Utils
    SOURCES
        CavaWatcher.hpp
        ResourcesWatcher.hpp
        FileSystemWatcher.hpp
        SQLReader.hpp
        QMLCrawler.hpp
        EnvManager.hpp
        MpvPlayer.hpp
        TomlParser.hpp
        TaskManager.hpp
        QalcEngine.hpp
    QT_COMPONENTS
        Core Gui Qml Quick Sql Concurrent Widgets Svg
    PACKAGES
        MpvQt
    PKG_CHECK
        DEPS libdrm sdl2 libqalculate
    LINK
        Qt6::Quick
        Qt6::Sql
        Qt6::Concurrent
        Qt6::Widgets
        Qt6::Svg
        MpvQt::MpvQt
)

if(NVIDIA)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(NVML REQUIRED IMPORTED_TARGET GLOBAL nvidia-ml)
    target_link_libraries(noon_utils PRIVATE PkgConfig::NVML)
    target_compile_definitions(noon_utils PRIVATE NVIDIA)
endif()

if(QRSUPPORT)
    add_subdirectory(qr)
endif()

add_subdirectory(latex)
add_subdirectory(dialogs)
