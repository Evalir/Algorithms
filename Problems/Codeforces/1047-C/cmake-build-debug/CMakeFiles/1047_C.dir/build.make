# CMAKE generated file: DO NOT EDIT!
<<<<<<< HEAD
# Generated by "Unix Makefiles" Generator, CMake Version 3.12
=======
# Generated by "Unix Makefiles" Generator, CMake Version 3.8
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076

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
<<<<<<< HEAD
CMAKE_COMMAND = /home/evalir/Documents/Software/Clion/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/evalir/Documents/Software/Clion/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f
=======
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug
=======
CMAKE_SOURCE_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076

# Include any dependencies generated for this target.
include CMakeFiles/1047_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1047_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1047_C.dir/flags.make

CMakeFiles/1047_C.dir/main.cpp.o: CMakeFiles/1047_C.dir/flags.make
CMakeFiles/1047_C.dir/main.cpp.o: ../main.cpp
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1047_C.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1047_C.dir/main.cpp.o -c /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/main.cpp

CMakeFiles/1047_C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1047_C.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/main.cpp > CMakeFiles/1047_C.dir/main.cpp.i

CMakeFiles/1047_C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1047_C.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/main.cpp -o CMakeFiles/1047_C.dir/main.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1047_C.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1047_C.dir/main.cpp.o -c /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/main.cpp

CMakeFiles/1047_C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1047_C.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/main.cpp > CMakeFiles/1047_C.dir/main.cpp.i

CMakeFiles/1047_C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1047_C.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/main.cpp -o CMakeFiles/1047_C.dir/main.cpp.s

CMakeFiles/1047_C.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/1047_C.dir/main.cpp.o.requires

CMakeFiles/1047_C.dir/main.cpp.o.provides: CMakeFiles/1047_C.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/1047_C.dir/build.make CMakeFiles/1047_C.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/1047_C.dir/main.cpp.o.provides

CMakeFiles/1047_C.dir/main.cpp.o.provides.build: CMakeFiles/1047_C.dir/main.cpp.o

>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076

# Object files for target 1047_C
1047_C_OBJECTS = \
"CMakeFiles/1047_C.dir/main.cpp.o"

# External object files for target 1047_C
1047_C_EXTERNAL_OBJECTS =

1047_C: CMakeFiles/1047_C.dir/main.cpp.o
1047_C: CMakeFiles/1047_C.dir/build.make
1047_C: CMakeFiles/1047_C.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1047_C"
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1047_C"
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1047_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1047_C.dir/build: 1047_C

.PHONY : CMakeFiles/1047_C.dir/build

<<<<<<< HEAD
=======
CMakeFiles/1047_C.dir/requires: CMakeFiles/1047_C.dir/main.cpp.o.requires

.PHONY : CMakeFiles/1047_C.dir/requires

>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
CMakeFiles/1047_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1047_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1047_C.dir/clean

CMakeFiles/1047_C.dir/depend:
<<<<<<< HEAD
	cd /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles/1047_C.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug /Users/Evalir/Documents/Programming/Algorithms/Problems/Codeforces/1047-C/cmake-build-debug/CMakeFiles/1047_C.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
.PHONY : CMakeFiles/1047_C.dir/depend
