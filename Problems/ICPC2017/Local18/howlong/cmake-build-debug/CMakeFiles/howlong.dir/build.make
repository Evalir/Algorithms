# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Desarrollo\Local18\howlong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Desarrollo\Local18\howlong\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/howlong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/howlong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/howlong.dir/flags.make

CMakeFiles/howlong.dir/main.cpp.obj: CMakeFiles/howlong.dir/flags.make
CMakeFiles/howlong.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desarrollo\Local18\howlong\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/howlong.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\howlong.dir\main.cpp.obj -c C:\Desarrollo\Local18\howlong\main.cpp

CMakeFiles/howlong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/howlong.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Desarrollo\Local18\howlong\main.cpp > CMakeFiles\howlong.dir\main.cpp.i

CMakeFiles/howlong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/howlong.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Desarrollo\Local18\howlong\main.cpp -o CMakeFiles\howlong.dir\main.cpp.s

# Object files for target howlong
howlong_OBJECTS = \
"CMakeFiles/howlong.dir/main.cpp.obj"

# External object files for target howlong
howlong_EXTERNAL_OBJECTS =

howlong.exe: CMakeFiles/howlong.dir/main.cpp.obj
howlong.exe: CMakeFiles/howlong.dir/build.make
howlong.exe: CMakeFiles/howlong.dir/linklibs.rsp
howlong.exe: CMakeFiles/howlong.dir/objects1.rsp
howlong.exe: CMakeFiles/howlong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Desarrollo\Local18\howlong\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable howlong.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\howlong.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/howlong.dir/build: howlong.exe

.PHONY : CMakeFiles/howlong.dir/build

CMakeFiles/howlong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\howlong.dir\cmake_clean.cmake
.PHONY : CMakeFiles/howlong.dir/clean

CMakeFiles/howlong.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Desarrollo\Local18\howlong C:\Desarrollo\Local18\howlong C:\Desarrollo\Local18\howlong\cmake-build-debug C:\Desarrollo\Local18\howlong\cmake-build-debug C:\Desarrollo\Local18\howlong\cmake-build-debug\CMakeFiles\howlong.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/howlong.dir/depend

