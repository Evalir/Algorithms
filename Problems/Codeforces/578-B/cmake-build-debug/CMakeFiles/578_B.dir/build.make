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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/578_B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/578_B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/578_B.dir/flags.make

CMakeFiles/578_B.dir/main.cpp.o: CMakeFiles/578_B.dir/flags.make
CMakeFiles/578_B.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/578_B.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/578_B.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/main.cpp

CMakeFiles/578_B.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/578_B.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/main.cpp > CMakeFiles/578_B.dir/main.cpp.i

CMakeFiles/578_B.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/578_B.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/main.cpp -o CMakeFiles/578_B.dir/main.cpp.s

CMakeFiles/578_B.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/578_B.dir/main.cpp.o.requires

CMakeFiles/578_B.dir/main.cpp.o.provides: CMakeFiles/578_B.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/578_B.dir/build.make CMakeFiles/578_B.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/578_B.dir/main.cpp.o.provides

CMakeFiles/578_B.dir/main.cpp.o.provides.build: CMakeFiles/578_B.dir/main.cpp.o


# Object files for target 578_B
578_B_OBJECTS = \
"CMakeFiles/578_B.dir/main.cpp.o"

# External object files for target 578_B
578_B_EXTERNAL_OBJECTS =

578_B: CMakeFiles/578_B.dir/main.cpp.o
578_B: CMakeFiles/578_B.dir/build.make
578_B: CMakeFiles/578_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 578_B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/578_B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/578_B.dir/build: 578_B

.PHONY : CMakeFiles/578_B.dir/build

CMakeFiles/578_B.dir/requires: CMakeFiles/578_B.dir/main.cpp.o.requires

.PHONY : CMakeFiles/578_B.dir/requires

CMakeFiles/578_B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/578_B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/578_B.dir/clean

CMakeFiles/578_B.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/578-B/cmake-build-debug/CMakeFiles/578_B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/578_B.dir/depend

