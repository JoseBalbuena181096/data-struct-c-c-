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
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/queue

# Include any dependencies generated for this target.
include CMakeFiles/array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array.dir/flags.make

CMakeFiles/array.dir/array.cpp.o: CMakeFiles/array.dir/flags.make
CMakeFiles/array.dir/array.cpp.o: array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/queue/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/array.dir/array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/array.dir/array.cpp.o -c /home/jose/Desktop/course_master_algorimh/queue/array.cpp

CMakeFiles/array.dir/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array.dir/array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/queue/array.cpp > CMakeFiles/array.dir/array.cpp.i

CMakeFiles/array.dir/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array.dir/array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/queue/array.cpp -o CMakeFiles/array.dir/array.cpp.s

CMakeFiles/array.dir/array.cpp.o.requires:

.PHONY : CMakeFiles/array.dir/array.cpp.o.requires

CMakeFiles/array.dir/array.cpp.o.provides: CMakeFiles/array.dir/array.cpp.o.requires
	$(MAKE) -f CMakeFiles/array.dir/build.make CMakeFiles/array.dir/array.cpp.o.provides.build
.PHONY : CMakeFiles/array.dir/array.cpp.o.provides

CMakeFiles/array.dir/array.cpp.o.provides.build: CMakeFiles/array.dir/array.cpp.o


# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/array.cpp.o"

# External object files for target array
array_EXTERNAL_OBJECTS =

array: CMakeFiles/array.dir/array.cpp.o
array: CMakeFiles/array.dir/build.make
array: CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/queue/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable array"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array.dir/build: array

.PHONY : CMakeFiles/array.dir/build

CMakeFiles/array.dir/requires: CMakeFiles/array.dir/array.cpp.o.requires

.PHONY : CMakeFiles/array.dir/requires

CMakeFiles/array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/array.dir/clean

CMakeFiles/array.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/queue && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/queue /home/jose/Desktop/course_master_algorimh/queue /home/jose/Desktop/course_master_algorimh/queue /home/jose/Desktop/course_master_algorimh/queue /home/jose/Desktop/course_master_algorimh/queue/CMakeFiles/array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/array.dir/depend

