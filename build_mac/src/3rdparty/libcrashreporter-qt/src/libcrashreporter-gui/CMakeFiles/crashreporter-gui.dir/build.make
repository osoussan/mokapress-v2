# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.2.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.2.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/builder/mokapress-v2/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/builder/mokapress-v2/build-mac

# Include any dependencies generated for this target.
include src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/depend.make

# Include the progress variables for this target.
include src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/progress.make

# Include the compile flags for this target's objects.
include src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/flags.make

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/ui_CrashReporter.h: /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/builder/mokapress-v2/build-mac/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_CrashReporter.h"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Users/builder/Qt/5.4/clang_64/bin/uic -o /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/ui_CrashReporter.h /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.ui

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/flags.make
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o: /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/builder/mokapress-v2/build-mac/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o -c /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.cpp

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.i"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.cpp > CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.i

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.s"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CrashReporter.cpp -o CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.s

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.requires:
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.requires

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.provides: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.requires
	$(MAKE) -f src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/build.make src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.provides.build
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.provides

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.provides.build: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/flags.make
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/crashreporter-gui_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/builder/mokapress-v2/build-mac/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o -c /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/crashreporter-gui_automoc.cpp

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.i"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/crashreporter-gui_automoc.cpp > CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.i

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.s"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/crashreporter-gui_automoc.cpp -o CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.s

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.requires:
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.requires

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.provides: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.requires
	$(MAKE) -f src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/build.make src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.provides.build
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.provides

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.provides.build: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o

# Object files for target crashreporter-gui
crashreporter__gui_OBJECTS = \
"CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o" \
"CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o"

# External object files for target crashreporter-gui
crashreporter__gui_EXTERNAL_OBJECTS =

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/libcrashreporter-gui.a: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/libcrashreporter-gui.a: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/libcrashreporter-gui.a: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/build.make
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/libcrashreporter-gui.a: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libcrashreporter-gui.a"
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && $(CMAKE_COMMAND) -P CMakeFiles/crashreporter-gui.dir/cmake_clean_target.cmake
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crashreporter-gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/build: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/libcrashreporter-gui.a
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/build

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/requires: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/CrashReporter.cpp.o.requires
src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/requires: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/crashreporter-gui_automoc.cpp.o.requires
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/requires

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/clean:
	cd /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui && $(CMAKE_COMMAND) -P CMakeFiles/crashreporter-gui.dir/cmake_clean.cmake
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/clean

src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/depend: src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/ui_CrashReporter.h
	cd /Users/builder/mokapress-v2/build-mac && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/builder/mokapress-v2/client /Users/builder/mokapress-v2/client/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui /Users/builder/mokapress-v2/build-mac /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui /Users/builder/mokapress-v2/build-mac/src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/3rdparty/libcrashreporter-qt/src/libcrashreporter-gui/CMakeFiles/crashreporter-gui.dir/depend

