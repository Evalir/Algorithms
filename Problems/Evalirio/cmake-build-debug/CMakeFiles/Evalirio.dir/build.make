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
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Evalirio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Evalirio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Evalirio.dir/flags.make

CMakeFiles/Evalirio.dir/main.cpp.o: CMakeFiles/Evalirio.dir/flags.make
CMakeFiles/Evalirio.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Evalirio.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Evalirio.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/main.cpp

CMakeFiles/Evalirio.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Evalirio.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/main.cpp > CMakeFiles/Evalirio.dir/main.cpp.i

CMakeFiles/Evalirio.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Evalirio.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/main.cpp -o CMakeFiles/Evalirio.dir/main.cpp.s

CMakeFiles/Evalirio.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Evalirio.dir/main.cpp.o.requires

CMakeFiles/Evalirio.dir/main.cpp.o.provides: CMakeFiles/Evalirio.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Evalirio.dir/build.make CMakeFiles/Evalirio.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Evalirio.dir/main.cpp.o.provides

CMakeFiles/Evalirio.dir/main.cpp.o.provides.build: CMakeFiles/Evalirio.dir/main.cpp.o


# Object files for target Evalirio
Evalirio_OBJECTS = \
"CMakeFiles/Evalirio.dir/main.cpp.o"

# External object files for target Evalirio
Evalirio_EXTERNAL_OBJECTS =

Evalirio: CMakeFiles/Evalirio.dir/main.cpp.o
Evalirio: CMakeFiles/Evalirio.dir/build.make
Evalirio: CMakeFiles/Evalirio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Evalirio"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Evalirio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Evalirio.dir/build: Evalirio

.PHONY : CMakeFiles/Evalirio.dir/build

CMakeFiles/Evalirio.dir/requires: CMakeFiles/Evalirio.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Evalirio.dir/requires

CMakeFiles/Evalirio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Evalirio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Evalirio.dir/clean

CMakeFiles/Evalirio.dir/depend:
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Evalirio/cmake-build-debug/CMakeFiles/Evalirio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Evalirio.dir/depend

