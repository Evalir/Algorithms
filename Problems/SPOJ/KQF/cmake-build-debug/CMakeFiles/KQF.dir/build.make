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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KQF.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KQF.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KQF.dir/flags.make

CMakeFiles/KQF.dir/main.cpp.o: CMakeFiles/KQF.dir/flags.make
CMakeFiles/KQF.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KQF.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/KQF.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/main.cpp

CMakeFiles/KQF.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KQF.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/main.cpp > CMakeFiles/KQF.dir/main.cpp.i

CMakeFiles/KQF.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KQF.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/main.cpp -o CMakeFiles/KQF.dir/main.cpp.s

CMakeFiles/KQF.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/KQF.dir/main.cpp.o.requires

CMakeFiles/KQF.dir/main.cpp.o.provides: CMakeFiles/KQF.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/KQF.dir/build.make CMakeFiles/KQF.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/KQF.dir/main.cpp.o.provides

CMakeFiles/KQF.dir/main.cpp.o.provides.build: CMakeFiles/KQF.dir/main.cpp.o


# Object files for target KQF
KQF_OBJECTS = \
"CMakeFiles/KQF.dir/main.cpp.o"

# External object files for target KQF
KQF_EXTERNAL_OBJECTS =

KQF: CMakeFiles/KQF.dir/main.cpp.o
KQF: CMakeFiles/KQF.dir/build.make
KQF: CMakeFiles/KQF.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KQF"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KQF.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KQF.dir/build: KQF

.PHONY : CMakeFiles/KQF.dir/build

CMakeFiles/KQF.dir/requires: CMakeFiles/KQF.dir/main.cpp.o.requires

.PHONY : CMakeFiles/KQF.dir/requires

CMakeFiles/KQF.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/KQF.dir/cmake_clean.cmake
.PHONY : CMakeFiles/KQF.dir/clean

CMakeFiles/KQF.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/SPOJ/KQF/cmake-build-debug/CMakeFiles/KQF.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KQF.dir/depend

