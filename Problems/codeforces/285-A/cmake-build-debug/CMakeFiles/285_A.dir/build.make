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
CMAKE_SOURCE_DIR = C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/285_A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/285_A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/285_A.dir/flags.make

CMakeFiles/285_A.dir/main.cpp.obj: CMakeFiles/285_A.dir/flags.make
CMakeFiles/285_A.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/285_A.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\285_A.dir\main.cpp.obj -c C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\main.cpp

CMakeFiles/285_A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/285_A.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\main.cpp > CMakeFiles\285_A.dir\main.cpp.i

CMakeFiles/285_A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/285_A.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\main.cpp -o CMakeFiles\285_A.dir\main.cpp.s

CMakeFiles/285_A.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/285_A.dir/main.cpp.obj.requires

CMakeFiles/285_A.dir/main.cpp.obj.provides: CMakeFiles/285_A.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\285_A.dir\build.make CMakeFiles/285_A.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/285_A.dir/main.cpp.obj.provides

CMakeFiles/285_A.dir/main.cpp.obj.provides.build: CMakeFiles/285_A.dir/main.cpp.obj


# Object files for target 285_A
285_A_OBJECTS = \
"CMakeFiles/285_A.dir/main.cpp.obj"

# External object files for target 285_A
285_A_EXTERNAL_OBJECTS =

285_A.exe: CMakeFiles/285_A.dir/main.cpp.obj
285_A.exe: CMakeFiles/285_A.dir/build.make
285_A.exe: CMakeFiles/285_A.dir/linklibs.rsp
285_A.exe: CMakeFiles/285_A.dir/objects1.rsp
285_A.exe: CMakeFiles/285_A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 285_A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\285_A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/285_A.dir/build: 285_A.exe

.PHONY : CMakeFiles/285_A.dir/build

CMakeFiles/285_A.dir/requires: CMakeFiles/285_A.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/285_A.dir/requires

CMakeFiles/285_A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\285_A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/285_A.dir/clean

CMakeFiles/285_A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug C:\Users\Evalir\Documents\Programming\Algorithms\Problems\codeforces\285-A\cmake-build-debug\CMakeFiles\285_A.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/285_A.dir/depend
