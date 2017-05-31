# Install script for directory: /Users/builder/mokapress-v2/client/src/libsync

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS" TYPE SHARED_LIBRARY FILES
    "/Users/builder/mokapress-v2/build-mac/src/libsync/libmokapresssync.2.2.3.dylib"
    "/Users/builder/mokapress-v2/build-mac/src/libsync/libmokapresssync.0.dylib"
    "/Users/builder/mokapress-v2/build-mac/src/libsync/libmokapresssync.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/libmokapresssync.2.2.3.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/libmokapresssync.0.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/MacOS/libmokapresssync.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND "/usr/bin/install_name_tool"
        -id "libmokapresssync.0.dylib"
        -change "/Users/builder/mokapress-v2/build-mac/csync/src/libocsync.0.dylib" "libocsync.0.dylib"
        "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/builder/Library/Frameworks"
        "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -add_rpath "/Users/builder/mokapress-v2/install/mokapress.app/Contents/MacOS/mokapress"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mokapress.app/Contents/Frameworks" TYPE DIRECTORY FILES "/Users/builder/Library/Frameworks/Sparkle.framework" USE_SOURCE_PERMISSIONS)
endif()

