# Install script for directory: /home/user/client/src/gui

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mokapress/i18n" TYPE FILE FILES
    "/home/user/build-win32/src/gui/client_TW.qm"
    "/home/user/build-win32/src/gui/client_ca.qm"
    "/home/user/build-win32/src/gui/client_cs.qm"
    "/home/user/build-win32/src/gui/client_de.qm"
    "/home/user/build-win32/src/gui/client_el.qm"
    "/home/user/build-win32/src/gui/client_en.qm"
    "/home/user/build-win32/src/gui/client_es.qm"
    "/home/user/build-win32/src/gui/client_es_AR.qm"
    "/home/user/build-win32/src/gui/client_et.qm"
    "/home/user/build-win32/src/gui/client_eu.qm"
    "/home/user/build-win32/src/gui/client_fa.qm"
    "/home/user/build-win32/src/gui/client_fi.qm"
    "/home/user/build-win32/src/gui/client_fr.qm"
    "/home/user/build-win32/src/gui/client_gl.qm"
    "/home/user/build-win32/src/gui/client_hu.qm"
    "/home/user/build-win32/src/gui/client_it.qm"
    "/home/user/build-win32/src/gui/client_ja.qm"
    "/home/user/build-win32/src/gui/client_nb_NO.qm"
    "/home/user/build-win32/src/gui/client_nl.qm"
    "/home/user/build-win32/src/gui/client_pl.qm"
    "/home/user/build-win32/src/gui/client_pt.qm"
    "/home/user/build-win32/src/gui/client_pt_BR.qm"
    "/home/user/build-win32/src/gui/client_ru.qm"
    "/home/user/build-win32/src/gui/client_sk.qm"
    "/home/user/build-win32/src/gui/client_sl.qm"
    "/home/user/build-win32/src/gui/client_sr.qm"
    "/home/user/build-win32/src/gui/client_sv.qm"
    "/home/user/build-win32/src/gui/client_th.qm"
    "/home/user/build-win32/src/gui/client_tr.qm"
    "/home/user/build-win32/src/gui/client_uk.qm"
    "/home/user/build-win32/src/gui/client_zh_CN.qm"
    "/home/user/build-win32/src/gui/client_zh_TW.qm"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/user/build-win32/bin/mokapress.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mokapress.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mokapress.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/i686-w64-mingw32-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mokapress.exe")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/build-win32/src/gui/updater/cmake_install.cmake")

endif()

