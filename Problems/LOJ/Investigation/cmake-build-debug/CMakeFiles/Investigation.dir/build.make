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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Investigation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Investigation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Investigation.dir/flags.make

CMakeFiles/Investigation.dir/main.cpp.o: CMakeFiles/Investigation.dir/flags.make
CMakeFiles/Investigation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Investigation.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Investigation.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/main.cpp

CMakeFiles/Investigation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Investigation.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/main.cpp > CMakeFiles/Investigation.dir/main.cpp.i

CMakeFiles/Investigation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Investigation.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/main.cpp -o CMakeFiles/Investigation.dir/main.cpp.s

CMakeFiles/Investigation.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Investigation.dir/main.cpp.o.requires

CMakeFiles/Investigation.dir/main.cpp.o.provides: CMakeFiles/Investigation.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Investigation.dir/build.make CMakeFiles/Investigation.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Investigation.dir/main.cpp.o.provides

CMakeFiles/Investigation.dir/main.cpp.o.provides.build: CMakeFiles/Investigation.dir/main.cpp.o


# Object files for target Investigation
Investigation_OBJECTS = \
"CMakeFiles/Investigation.dir/main.cpp.o"

# External object files for target Investigation
Investigation_EXTERNAL_OBJECTS =

Investigation: CMakeFiles/Investigation.dir/main.cpp.o
Investigation: CMakeFiles/Investigation.dir/build.make
Investigation: CMakeFiles/Investigation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Investigation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Investigation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Investigation.dir/build: Investigation

.PHONY : CMakeFiles/Investigation.dir/build

CMakeFiles/Investigation.dir/requires: CMakeFiles/Investigation.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Investigation.dir/requires

CMakeFiles/Investigation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Investigation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Investigation.dir/clean

CMakeFiles/Investigation.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/LOJ/Investigation/cmake-build-debug/CMakeFiles/Investigation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Investigation.dir/depend
