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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cow.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cow.dir/flags.make

CMakeFiles/cow.dir/main.cpp.o: CMakeFiles/cow.dir/flags.make
CMakeFiles/cow.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cow.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cow.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/main.cpp

CMakeFiles/cow.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cow.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/main.cpp > CMakeFiles/cow.dir/main.cpp.i

CMakeFiles/cow.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cow.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/main.cpp -o CMakeFiles/cow.dir/main.cpp.s

CMakeFiles/cow.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cow.dir/main.cpp.o.requires

CMakeFiles/cow.dir/main.cpp.o.provides: CMakeFiles/cow.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cow.dir/build.make CMakeFiles/cow.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cow.dir/main.cpp.o.provides

CMakeFiles/cow.dir/main.cpp.o.provides.build: CMakeFiles/cow.dir/main.cpp.o


# Object files for target cow
cow_OBJECTS = \
"CMakeFiles/cow.dir/main.cpp.o"

# External object files for target cow
cow_EXTERNAL_OBJECTS =

cow: CMakeFiles/cow.dir/main.cpp.o
cow: CMakeFiles/cow.dir/build.make
cow: CMakeFiles/cow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cow"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cow.dir/build: cow

.PHONY : CMakeFiles/cow.dir/build

CMakeFiles/cow.dir/requires: CMakeFiles/cow.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cow.dir/requires

CMakeFiles/cow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cow.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cow.dir/clean

CMakeFiles/cow.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/cow/cmake-build-debug/CMakeFiles/cow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cow.dir/depend

