# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/evalir/Documents/Software/Clion/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/evalir/Documents/Software/Clion/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/405_B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/405_B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/405_B.dir/flags.make

CMakeFiles/405_B.dir/main.cpp.o: CMakeFiles/405_B.dir/flags.make
CMakeFiles/405_B.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/405_B.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/405_B.dir/main.cpp.o -c /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/main.cpp

CMakeFiles/405_B.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/405_B.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/main.cpp > CMakeFiles/405_B.dir/main.cpp.i

CMakeFiles/405_B.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/405_B.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/main.cpp -o CMakeFiles/405_B.dir/main.cpp.s

# Object files for target 405_B
405_B_OBJECTS = \
"CMakeFiles/405_B.dir/main.cpp.o"

# External object files for target 405_B
405_B_EXTERNAL_OBJECTS =

405_B: CMakeFiles/405_B.dir/main.cpp.o
405_B: CMakeFiles/405_B.dir/build.make
405_B: CMakeFiles/405_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 405_B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/405_B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/405_B.dir/build: 405_B

.PHONY : CMakeFiles/405_B.dir/build

CMakeFiles/405_B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/405_B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/405_B.dir/clean

CMakeFiles/405_B.dir/depend:
	cd /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug /home/evalir/Documents/ICPC/Algorithms/Problems/Codeforces/405-B/cmake-build-debug/CMakeFiles/405_B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/405_B.dir/depend

