# Install script for directory: /home/pharmaracist/Projects/Noon-libqt/src/network

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so"
         RPATH "\$ORIGIN:\$ORIGIN/../lib64")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Network" TYPE SHARED_LIBRARY FILES "/home/pharmaracist/Projects/Noon-libqt/build/src/network/libnoon_network.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so"
         OLD_RPATH "::::::::::::::::::::::::"
         NEW_RPATH "\$ORIGIN:\$ORIGIN/../lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_network.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pharmaracist/Projects/Noon-libqt/build/src/network/CMakeFiles/noon_network.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so"
         RPATH "\$ORIGIN:\$ORIGIN/../lib64")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Network" TYPE MODULE FILES "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Network/libnoon_networkplugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so"
         OLD_RPATH "/home/pharmaracist/Projects/Noon-libqt/build/src/network:"
         NEW_RPATH "\$ORIGIN:\$ORIGIN/../lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Network/libnoon_networkplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pharmaracist/Projects/Noon-libqt/build/src/network/CMakeFiles/noon_networkplugin.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Network/qmldir;/usr/lib64/qt6/qml/Noon/Network/noon_network.qmltypes")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Network" TYPE FILE FILES
    "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Network/qmldir"
    "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Network/noon_network.qmltypes"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/pharmaracist/Projects/Noon-libqt/build/src/network/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
