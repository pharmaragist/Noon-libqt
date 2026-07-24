# Install script for directory: /home/pharmaracist/Projects/Noon-libqt/src/utils/dialogs

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
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so"
         RPATH "\$ORIGIN:\$ORIGIN/../lib64")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Utils/Dialogs" TYPE SHARED_LIBRARY FILES "/home/pharmaracist/Projects/Noon-libqt/build/src/utils/dialogs/libnoon_utils_dialogs.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so"
         OLD_RPATH "::::::::::::::::::::::::"
         NEW_RPATH "\$ORIGIN:\$ORIGIN/../lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogs.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pharmaracist/Projects/Noon-libqt/build/src/utils/dialogs/CMakeFiles/noon_utils_dialogs.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so"
         RPATH "\$ORIGIN:\$ORIGIN/../lib64")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Utils/Dialogs" TYPE MODULE FILES "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so"
         OLD_RPATH "/home/pharmaracist/Projects/Noon-libqt/build/src/utils/dialogs:"
         NEW_RPATH "\$ORIGIN:\$ORIGIN/../lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib64/qt6/qml/Noon/Utils/Dialogs/libnoon_utils_dialogsplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pharmaracist/Projects/Noon-libqt/build/src/utils/dialogs/CMakeFiles/noon_utils_dialogsplugin.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib64/qt6/qml/Noon/Utils/Dialogs/qmldir;/usr/lib64/qt6/qml/Noon/Utils/Dialogs/noon_utils_dialogs.qmltypes")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib64/qt6/qml/Noon/Utils/Dialogs" TYPE FILE FILES
    "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Utils/Dialogs/qmldir"
    "/home/pharmaracist/Projects/Noon-libqt/build/Noon/Utils/Dialogs/noon_utils_dialogs.qmltypes"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/pharmaracist/Projects/Noon-libqt/build/src/utils/dialogs/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
