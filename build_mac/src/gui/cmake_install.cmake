# Install script for directory: /Users/builder/mokapress-v2/client/src/gui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/builder/mokapress-v2/install")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/Resources/Translations" TYPE FILE FILES
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_ca.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_cs.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_de.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_el.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_en.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_es.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_es_AR.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_et.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_eu.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_fa.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_fi.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_fr.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_gl.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_hu.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_it.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_ja.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_nb_NO.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_nl.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_pl.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_pt.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_pt_BR.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_ru.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_sk.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_sl.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_sr.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_sv.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_th.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_tr.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_TW.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_uk.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_zh_CN.qm"
    "/Users/builder/mokapress-v2/build-mac/src/gui/client_zh_TW.qm"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/Resources/Translations" TYPE FILE FILES
    "/Users/builder/Qt/5.4/clang_64/translations/qt_ar.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_ca.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_cs.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_da.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_de.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_es.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_fa.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_fi.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_fr.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_gl.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_he.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_hu.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_it.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_ja.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_ko.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_lt.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_pl.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_pt.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_ru.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_sk.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_sl.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_sv.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_uk.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_zh_CN.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_zh_TW.qm"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/Resources/Translations" TYPE FILE FILES
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_ca.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_cs.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_de.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_fi.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_hu.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_it.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_ja.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_ko.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_lv.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_ru.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_sk.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtbase_uk.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_zh_CN.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qt_zh_TW.qm"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/Resources/Translations" TYPE FILE FILES
    "/Users/builder/Qt/5.4/clang_64/translations/qtkeychain_de.qm"
    "/Users/builder/Qt/5.4/clang_64/translations/qtkeychain_ro.qm"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/builder/mokapress-v2/build-mac/bin/mokapress.app" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./mokapress.app/Contents/MacOS/mokapress" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./mokapress.app/Contents/MacOS/mokapress")
    execute_process(COMMAND "/usr/bin/install_name_tool"
      -change "/Users/builder/mokapress-v2/build-mac/csync/src/libocsync.0.dylib" "libocsync.0.dylib"
      -change "/Users/builder/mokapress-v2/build-mac/src/libsync/libmokapresssync.0.dylib" "libmokapresssync.0.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./mokapress.app/Contents/MacOS/mokapress")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/builder/Library/Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./mokapress.app/Contents/MacOS/mokapress")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/builder/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./mokapress.app/Contents/MacOS/mokapress")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RUNTIME")
  
    message(STATUS "Deploying (Qt) dependencies and fixing library paths...")
    execute_process(COMMAND "/Users/builder/mokapress-v2/client/admin/osx/macdeployqt.py" /Users/builder/mokapress-v2/install/mokapress.app /Users/builder/Qt/5.4/clang_64/bin/qmake)
    
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/builder/mokapress-v2/build-mac/src/gui/updater/cmake_install.cmake")

endif()

