# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/linked_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/linked_list

# Include any dependencies generated for this target.
include CMakeFiles/SparceMatrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SparceMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SparceMatrix.dir/flags.make

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o: CMakeFiles/SparceMatrix.dir/flags.make
CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o: SparceMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o -c /home/jose/Desktop/course_master_algorimh/linked_list/SparceMatrix.cpp

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/linked_list/SparceMatrix.cpp > CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.i

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/linked_list/SparceMatrix.cpp -o CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.s

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.requires:

.PHONY : CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.requires

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.provides: CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/SparceMatrix.dir/build.make CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.provides.build
.PHONY : CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.provides

CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.provides.build: CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o


# Object files for target SparceMatrix
SparceMatrix_OBJECTS = \
"CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o"

# External object files for target SparceMatrix
SparceMatrix_EXTERNAL_OBJECTS =

SparceMatrix: CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o
SparceMatrix: CMakeFiles/SparceMatrix.dir/build.make
SparceMatrix: CMakeFiles/SparceMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SparceMatrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SparceMatrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SparceMatrix.dir/build: SparceMatrix

.PHONY : CMakeFiles/SparceMatrix.dir/build

CMakeFiles/SparceMatrix.dir/requires: CMakeFiles/SparceMatrix.dir/SparceMatrix.cpp.o.requires

.PHONY : CMakeFiles/SparceMatrix.dir/requires

CMakeFiles/SparceMatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SparceMatrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SparceMatrix.dir/clean

CMakeFiles/SparceMatrix.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/linked_list && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles/SparceMatrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SparceMatrix.dir/depend

