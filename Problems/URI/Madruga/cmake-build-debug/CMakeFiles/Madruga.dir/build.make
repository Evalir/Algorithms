# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Madruga.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Madruga.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Madruga.dir/flags.make

CMakeFiles/Madruga.dir/main.cpp.obj: CMakeFiles/Madruga.dir/flags.make
CMakeFiles/Madruga.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Madruga.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Madruga.dir\main.cpp.obj -c C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\main.cpp

CMakeFiles/Madruga.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Madruga.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\main.cpp > CMakeFiles\Madruga.dir\main.cpp.i

CMakeFiles/Madruga.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Madruga.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\main.cpp -o CMakeFiles\Madruga.dir\main.cpp.s

CMakeFiles/Madruga.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Madruga.dir/main.cpp.obj.requires

CMakeFiles/Madruga.dir/main.cpp.obj.provides: CMakeFiles/Madruga.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Madruga.dir\build.make CMakeFiles/Madruga.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Madruga.dir/main.cpp.obj.provides

CMakeFiles/Madruga.dir/main.cpp.obj.provides.build: CMakeFiles/Madruga.dir/main.cpp.obj


# Object files for target Madruga
Madruga_OBJECTS = \
"CMakeFiles/Madruga.dir/main.cpp.obj"

# External object files for target Madruga
Madruga_EXTERNAL_OBJECTS =

Madruga.exe: CMakeFiles/Madruga.dir/main.cpp.obj
Madruga.exe: CMakeFiles/Madruga.dir/build.make
Madruga.exe: CMakeFiles/Madruga.dir/linklibs.rsp
Madruga.exe: CMakeFiles/Madruga.dir/objects1.rsp
Madruga.exe: CMakeFiles/Madruga.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Madruga.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Madruga.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Madruga.dir/build: Madruga.exe

.PHONY : CMakeFiles/Madruga.dir/build

CMakeFiles/Madruga.dir/requires: CMakeFiles/Madruga.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Madruga.dir/requires

CMakeFiles/Madruga.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Madruga.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Madruga.dir/clean

CMakeFiles/Madruga.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug C:\Users\Evalir\Documents\Programming\Algorithms\Problems\URI\Madruga\cmake-build-debug\CMakeFiles\Madruga.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Madruga.dir/depend

