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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/POSTERS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/POSTERS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/POSTERS.dir/flags.make

CMakeFiles/POSTERS.dir/main.cpp.o: CMakeFiles/POSTERS.dir/flags.make
CMakeFiles/POSTERS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/POSTERS.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POSTERS.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/main.cpp

CMakeFiles/POSTERS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POSTERS.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/main.cpp > CMakeFiles/POSTERS.dir/main.cpp.i

CMakeFiles/POSTERS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POSTERS.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/main.cpp -o CMakeFiles/POSTERS.dir/main.cpp.s

CMakeFiles/POSTERS.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/POSTERS.dir/main.cpp.o.requires

CMakeFiles/POSTERS.dir/main.cpp.o.provides: CMakeFiles/POSTERS.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/POSTERS.dir/build.make CMakeFiles/POSTERS.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/POSTERS.dir/main.cpp.o.provides

CMakeFiles/POSTERS.dir/main.cpp.o.provides.build: CMakeFiles/POSTERS.dir/main.cpp.o


# Object files for target POSTERS
POSTERS_OBJECTS = \
"CMakeFiles/POSTERS.dir/main.cpp.o"

# External object files for target POSTERS
POSTERS_EXTERNAL_OBJECTS =

POSTERS: CMakeFiles/POSTERS.dir/main.cpp.o
POSTERS: CMakeFiles/POSTERS.dir/build.make
POSTERS: CMakeFiles/POSTERS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable POSTERS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/POSTERS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/POSTERS.dir/build: POSTERS

.PHONY : CMakeFiles/POSTERS.dir/build

CMakeFiles/POSTERS.dir/requires: CMakeFiles/POSTERS.dir/main.cpp.o.requires

.PHONY : CMakeFiles/POSTERS.dir/requires

CMakeFiles/POSTERS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/POSTERS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/POSTERS.dir/clean

CMakeFiles/POSTERS.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/POSTERS/cmake-build-debug/CMakeFiles/POSTERS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/POSTERS.dir/depend

