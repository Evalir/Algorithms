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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FLIPCOIN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FLIPCOIN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FLIPCOIN.dir/flags.make

CMakeFiles/FLIPCOIN.dir/main.cpp.o: CMakeFiles/FLIPCOIN.dir/flags.make
CMakeFiles/FLIPCOIN.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FLIPCOIN.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FLIPCOIN.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/main.cpp

CMakeFiles/FLIPCOIN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FLIPCOIN.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/main.cpp > CMakeFiles/FLIPCOIN.dir/main.cpp.i

CMakeFiles/FLIPCOIN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FLIPCOIN.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/main.cpp -o CMakeFiles/FLIPCOIN.dir/main.cpp.s

CMakeFiles/FLIPCOIN.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/FLIPCOIN.dir/main.cpp.o.requires

CMakeFiles/FLIPCOIN.dir/main.cpp.o.provides: CMakeFiles/FLIPCOIN.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/FLIPCOIN.dir/build.make CMakeFiles/FLIPCOIN.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/FLIPCOIN.dir/main.cpp.o.provides

CMakeFiles/FLIPCOIN.dir/main.cpp.o.provides.build: CMakeFiles/FLIPCOIN.dir/main.cpp.o


# Object files for target FLIPCOIN
FLIPCOIN_OBJECTS = \
"CMakeFiles/FLIPCOIN.dir/main.cpp.o"

# External object files for target FLIPCOIN
FLIPCOIN_EXTERNAL_OBJECTS =

FLIPCOIN: CMakeFiles/FLIPCOIN.dir/main.cpp.o
FLIPCOIN: CMakeFiles/FLIPCOIN.dir/build.make
FLIPCOIN: CMakeFiles/FLIPCOIN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FLIPCOIN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FLIPCOIN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FLIPCOIN.dir/build: FLIPCOIN

.PHONY : CMakeFiles/FLIPCOIN.dir/build

CMakeFiles/FLIPCOIN.dir/requires: CMakeFiles/FLIPCOIN.dir/main.cpp.o.requires

.PHONY : CMakeFiles/FLIPCOIN.dir/requires

CMakeFiles/FLIPCOIN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FLIPCOIN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FLIPCOIN.dir/clean

CMakeFiles/FLIPCOIN.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codechef/FLIPCOIN/cmake-build-debug/CMakeFiles/FLIPCOIN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FLIPCOIN.dir/depend

