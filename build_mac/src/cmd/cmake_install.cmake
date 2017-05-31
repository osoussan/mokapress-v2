# Install script for directory: /Users/builder/mokapress-v2/client/src/cmd

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS" TYPE EXECUTABLE FILES "/Users/builder/mokapress-v2/build-mac/bin/mokapresscmd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd")
    execute_process(COMMAND "/usr/bin/install_name_tool"
      -change "/Users/builder/mokapress-v2/build-mac/csync/src/libocsync.0.dylib" "libocsync.0.dylib"
      -change "/Users/builder/mokapress-v2/build-mac/src/libsync/libmokapresssync.0.dylib" "libmokapresssync.0.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/builder/Library/Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/builder/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/mokapresscmd")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RUNTIME")
  
    message(STATUS "Deploying (Qt) dependencies and fixing library paths...")
    execute_process(COMMAND "/Users/builder/mokapress-v2/client/admin/osx/macdeployqt.py" /Users/builder/mokapress-v2/install/mokapress.app /Users/builder/Qt/5.4/clang_64/bin/qmake)
    
endif()

