# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/build-win32

# Include any dependencies generated for this target.
include src/gui/CMakeFiles/updater.dir/depend.make

# Include the progress variables for this target.
include src/gui/CMakeFiles/updater.dir/progress.make

# Include the compile flags for this target's objects.
include src/gui/CMakeFiles/updater.dir/flags.make

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj: src/gui/CMakeFiles/updater.dir/flags.make
src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj: src/gui/CMakeFiles/updater.dir/includes_CXX.rsp
src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj: /home/user/client/src/gui/updater/ocupdater.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/updater.dir/updater/ocupdater.cpp.obj -c /home/user/client/src/gui/updater/ocupdater.cpp

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/updater.dir/updater/ocupdater.cpp.i"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/client/src/gui/updater/ocupdater.cpp > CMakeFiles/updater.dir/updater/ocupdater.cpp.i

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/updater.dir/updater/ocupdater.cpp.s"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/client/src/gui/updater/ocupdater.cpp -o CMakeFiles/updater.dir/updater/ocupdater.cpp.s

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.requires:

.PHONY : src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.requires

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.provides: src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.requires
	$(MAKE) -f src/gui/CMakeFiles/updater.dir/build.make src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.provides.build
.PHONY : src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.provides

src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.provides.build: src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj


src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj: src/gui/CMakeFiles/updater.dir/flags.make
src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj: src/gui/CMakeFiles/updater.dir/includes_CXX.rsp
src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj: /home/user/client/src/gui/updater/updateinfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/updater.dir/updater/updateinfo.cpp.obj -c /home/user/client/src/gui/updater/updateinfo.cpp

src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/updater.dir/updater/updateinfo.cpp.i"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/client/src/gui/updater/updateinfo.cpp > CMakeFiles/updater.dir/updater/updateinfo.cpp.i

src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/updater.dir/updater/updateinfo.cpp.s"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/client/src/gui/updater/updateinfo.cpp -o CMakeFiles/updater.dir/updater/updateinfo.cpp.s

src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.requires:

.PHONY : src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.requires

src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.provides: src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.requires
	$(MAKE) -f src/gui/CMakeFiles/updater.dir/build.make src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.provides.build
.PHONY : src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.provides

src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.provides.build: src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj


src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj: src/gui/CMakeFiles/updater.dir/flags.make
src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj: src/gui/CMakeFiles/updater.dir/includes_CXX.rsp
src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj: /home/user/client/src/gui/updater/updater.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/updater.dir/updater/updater.cpp.obj -c /home/user/client/src/gui/updater/updater.cpp

src/gui/CMakeFiles/updater.dir/updater/updater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/updater.dir/updater/updater.cpp.i"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/client/src/gui/updater/updater.cpp > CMakeFiles/updater.dir/updater/updater.cpp.i

src/gui/CMakeFiles/updater.dir/updater/updater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/updater.dir/updater/updater.cpp.s"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/client/src/gui/updater/updater.cpp -o CMakeFiles/updater.dir/updater/updater.cpp.s

src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.requires:

.PHONY : src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.requires

src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.provides: src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.requires
	$(MAKE) -f src/gui/CMakeFiles/updater.dir/build.make src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.provides.build
.PHONY : src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.provides

src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.provides.build: src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj


src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj: src/gui/CMakeFiles/updater.dir/flags.make
src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj: src/gui/CMakeFiles/updater.dir/includes_CXX.rsp
src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj: src/gui/updater_autogen/moc_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj -c /home/user/build-win32/src/gui/updater_autogen/moc_compilation.cpp

src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.i"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/build-win32/src/gui/updater_autogen/moc_compilation.cpp > CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.i

src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.s"
	cd /home/user/build-win32/src/gui && /usr/bin/i686-w64-mingw32-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/build-win32/src/gui/updater_autogen/moc_compilation.cpp -o CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.s

src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.requires:

.PHONY : src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.requires

src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.provides: src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.requires
	$(MAKE) -f src/gui/CMakeFiles/updater.dir/build.make src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.provides.build
.PHONY : src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.provides

src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.provides.build: src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj


# Object files for target updater
updater_OBJECTS = \
"CMakeFiles/updater.dir/updater/ocupdater.cpp.obj" \
"CMakeFiles/updater.dir/updater/updateinfo.cpp.obj" \
"CMakeFiles/updater.dir/updater/updater.cpp.obj" \
"CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj"

# External object files for target updater
updater_EXTERNAL_OBJECTS =

src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj
src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj
src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj
src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj
src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/build.make
src/gui/libupdater.a: src/gui/CMakeFiles/updater.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libupdater.a"
	cd /home/user/build-win32/src/gui && $(CMAKE_COMMAND) -P CMakeFiles/updater.dir/cmake_clean_target.cmake
	cd /home/user/build-win32/src/gui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/updater.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/gui/CMakeFiles/updater.dir/build: src/gui/libupdater.a

.PHONY : src/gui/CMakeFiles/updater.dir/build

src/gui/CMakeFiles/updater.dir/requires: src/gui/CMakeFiles/updater.dir/updater/ocupdater.cpp.obj.requires
src/gui/CMakeFiles/updater.dir/requires: src/gui/CMakeFiles/updater.dir/updater/updateinfo.cpp.obj.requires
src/gui/CMakeFiles/updater.dir/requires: src/gui/CMakeFiles/updater.dir/updater/updater.cpp.obj.requires
src/gui/CMakeFiles/updater.dir/requires: src/gui/CMakeFiles/updater.dir/updater_autogen/moc_compilation.cpp.obj.requires

.PHONY : src/gui/CMakeFiles/updater.dir/requires

src/gui/CMakeFiles/updater.dir/clean:
	cd /home/user/build-win32/src/gui && $(CMAKE_COMMAND) -P CMakeFiles/updater.dir/cmake_clean.cmake
.PHONY : src/gui/CMakeFiles/updater.dir/clean

src/gui/CMakeFiles/updater.dir/depend:
	cd /home/user/build-win32 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/client /home/user/client/src/gui /home/user/build-win32 /home/user/build-win32/src/gui /home/user/build-win32/src/gui/CMakeFiles/updater.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/gui/CMakeFiles/updater.dir/depend
