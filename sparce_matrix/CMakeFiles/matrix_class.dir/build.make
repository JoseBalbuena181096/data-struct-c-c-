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
CMAKE_SOURCE_DIR = /home/jetbot/course_master_algorimh/sparce_matrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jetbot/course_master_algorimh/sparce_matrix

# Include any dependencies generated for this target.
include CMakeFiles/matrix_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/matrix_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrix_class.dir/flags.make

CMakeFiles/matrix_class.dir/matrix_class.cpp.o: CMakeFiles/matrix_class.dir/flags.make
CMakeFiles/matrix_class.dir/matrix_class.cpp.o: matrix_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetbot/course_master_algorimh/sparce_matrix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrix_class.dir/matrix_class.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrix_class.dir/matrix_class.cpp.o -c /home/jetbot/course_master_algorimh/sparce_matrix/matrix_class.cpp

CMakeFiles/matrix_class.dir/matrix_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix_class.dir/matrix_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetbot/course_master_algorimh/sparce_matrix/matrix_class.cpp > CMakeFiles/matrix_class.dir/matrix_class.cpp.i

CMakeFiles/matrix_class.dir/matrix_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix_class.dir/matrix_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetbot/course_master_algorimh/sparce_matrix/matrix_class.cpp -o CMakeFiles/matrix_class.dir/matrix_class.cpp.s

CMakeFiles/matrix_class.dir/matrix_class.cpp.o.requires:

.PHONY : CMakeFiles/matrix_class.dir/matrix_class.cpp.o.requires

CMakeFiles/matrix_class.dir/matrix_class.cpp.o.provides: CMakeFiles/matrix_class.dir/matrix_class.cpp.o.requires
	$(MAKE) -f CMakeFiles/matrix_class.dir/build.make CMakeFiles/matrix_class.dir/matrix_class.cpp.o.provides.build
.PHONY : CMakeFiles/matrix_class.dir/matrix_class.cpp.o.provides

CMakeFiles/matrix_class.dir/matrix_class.cpp.o.provides.build: CMakeFiles/matrix_class.dir/matrix_class.cpp.o


# Object files for target matrix_class
matrix_class_OBJECTS = \
"CMakeFiles/matrix_class.dir/matrix_class.cpp.o"

# External object files for target matrix_class
matrix_class_EXTERNAL_OBJECTS =

matrix_class: CMakeFiles/matrix_class.dir/matrix_class.cpp.o
matrix_class: CMakeFiles/matrix_class.dir/build.make
matrix_class: CMakeFiles/matrix_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jetbot/course_master_algorimh/sparce_matrix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrix_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrix_class.dir/build: matrix_class

.PHONY : CMakeFiles/matrix_class.dir/build

CMakeFiles/matrix_class.dir/requires: CMakeFiles/matrix_class.dir/matrix_class.cpp.o.requires

.PHONY : CMakeFiles/matrix_class.dir/requires

CMakeFiles/matrix_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrix_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrix_class.dir/clean

CMakeFiles/matrix_class.dir/depend:
	cd /home/jetbot/course_master_algorimh/sparce_matrix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jetbot/course_master_algorimh/sparce_matrix /home/jetbot/course_master_algorimh/sparce_matrix /home/jetbot/course_master_algorimh/sparce_matrix /home/jetbot/course_master_algorimh/sparce_matrix /home/jetbot/course_master_algorimh/sparce_matrix/CMakeFiles/matrix_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/matrix_class.dir/depend
