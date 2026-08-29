noon_setup(noon_protocols_hypr Noon.Protocols.Hypr
    SOURCES
      NightLightManager.hpp
      hyprland-ctm-control-v1.cpp
    QT_COMPONENTS
      Core Qml
    PKG_CHECK
      WAYLAND_CLIENT wayland-client
    LINK
      Qt6::Core
      Qt6::Qml
      PkgConfig::WAYLAND_CLIENT
)
