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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/20_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20_C.dir/flags.make

CMakeFiles/20_C.dir/main.cpp.o: CMakeFiles/20_C.dir/flags.make
CMakeFiles/20_C.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/20_C.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/20_C.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/main.cpp

CMakeFiles/20_C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20_C.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/main.cpp > CMakeFiles/20_C.dir/main.cpp.i

CMakeFiles/20_C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20_C.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/main.cpp -o CMakeFiles/20_C.dir/main.cpp.s

CMakeFiles/20_C.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/20_C.dir/main.cpp.o.requires

CMakeFiles/20_C.dir/main.cpp.o.provides: CMakeFiles/20_C.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/20_C.dir/build.make CMakeFiles/20_C.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/20_C.dir/main.cpp.o.provides

CMakeFiles/20_C.dir/main.cpp.o.provides.build: CMakeFiles/20_C.dir/main.cpp.o


# Object files for target 20_C
20_C_OBJECTS = \
"CMakeFiles/20_C.dir/main.cpp.o"

# External object files for target 20_C
20_C_EXTERNAL_OBJECTS =

20_C: CMakeFiles/20_C.dir/main.cpp.o
20_C: CMakeFiles/20_C.dir/build.make
20_C: CMakeFiles/20_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 20_C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/20_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20_C.dir/build: 20_C

.PHONY : CMakeFiles/20_C.dir/build

CMakeFiles/20_C.dir/requires: CMakeFiles/20_C.dir/main.cpp.o.requires

.PHONY : CMakeFiles/20_C.dir/requires

CMakeFiles/20_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/20_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/20_C.dir/clean

CMakeFiles/20_C.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/20-C/cmake-build-debug/CMakeFiles/20_C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20_C.dir/depend

