# Install script for directory: /Users/builder/mokapress-v2/client/src/crashreporter

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS" TYPE EXECUTABLE FILES "/Users/builder/mokapress-v2/build-mac/bin/mokapress_crash_reporter")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapress_crash_reporter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapress_crash_reporter")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/builder/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapress_crash_reporter")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapress_crash_reporter")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RUNTIME")
  
        message(STATUS "Deploying (Qt) dependencies and fixing library paths...")
        execute_process(COMMAND "/Users/builder/mokapress-v2/client/admin/osx/macdeployqt.py" /Users/builder/mokapress-v2/install/mokapress.app /Users/builder/Qt/5.4/clang_64/bin/qmake)
        
endif()

