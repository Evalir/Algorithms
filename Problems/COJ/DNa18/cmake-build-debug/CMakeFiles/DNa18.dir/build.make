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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DNa18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DNa18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DNa18.dir/flags.make

CMakeFiles/DNa18.dir/main.cpp.o: CMakeFiles/DNa18.dir/flags.make
CMakeFiles/DNa18.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DNa18.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DNa18.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/main.cpp

CMakeFiles/DNa18.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DNa18.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/main.cpp > CMakeFiles/DNa18.dir/main.cpp.i

CMakeFiles/DNa18.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DNa18.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/main.cpp -o CMakeFiles/DNa18.dir/main.cpp.s

CMakeFiles/DNa18.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/DNa18.dir/main.cpp.o.requires

CMakeFiles/DNa18.dir/main.cpp.o.provides: CMakeFiles/DNa18.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/DNa18.dir/build.make CMakeFiles/DNa18.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/DNa18.dir/main.cpp.o.provides

CMakeFiles/DNa18.dir/main.cpp.o.provides.build: CMakeFiles/DNa18.dir/main.cpp.o


# Object files for target DNa18
DNa18_OBJECTS = \
"CMakeFiles/DNa18.dir/main.cpp.o"

# External object files for target DNa18
DNa18_EXTERNAL_OBJECTS =

DNa18: CMakeFiles/DNa18.dir/main.cpp.o
DNa18: CMakeFiles/DNa18.dir/build.make
DNa18: CMakeFiles/DNa18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DNa18"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DNa18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DNa18.dir/build: DNa18

.PHONY : CMakeFiles/DNa18.dir/build

CMakeFiles/DNa18.dir/requires: CMakeFiles/DNa18.dir/main.cpp.o.requires

.PHONY : CMakeFiles/DNa18.dir/requires

CMakeFiles/DNa18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DNa18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DNa18.dir/clean

CMakeFiles/DNa18.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18 /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18 /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/COJ/DNa18/cmake-build-debug/CMakeFiles/DNa18.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DNa18.dir/depend

