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
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/Tree/alv-tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/Tree/alv-tree

# Include any dependencies generated for this target.
include CMakeFiles/alv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/alv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alv.dir/flags.make

CMakeFiles/alv.dir/alv.cpp.o: CMakeFiles/alv.dir/flags.make
CMakeFiles/alv.dir/alv.cpp.o: alv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/Tree/alv-tree/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/alv.dir/alv.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alv.dir/alv.cpp.o -c /home/jose/Desktop/course_master_algorimh/Tree/alv-tree/alv.cpp

CMakeFiles/alv.dir/alv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alv.dir/alv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/Tree/alv-tree/alv.cpp > CMakeFiles/alv.dir/alv.cpp.i

CMakeFiles/alv.dir/alv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alv.dir/alv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/Tree/alv-tree/alv.cpp -o CMakeFiles/alv.dir/alv.cpp.s

CMakeFiles/alv.dir/alv.cpp.o.requires:

.PHONY : CMakeFiles/alv.dir/alv.cpp.o.requires

CMakeFiles/alv.dir/alv.cpp.o.provides: CMakeFiles/alv.dir/alv.cpp.o.requires
	$(MAKE) -f CMakeFiles/alv.dir/build.make CMakeFiles/alv.dir/alv.cpp.o.provides.build
.PHONY : CMakeFiles/alv.dir/alv.cpp.o.provides

CMakeFiles/alv.dir/alv.cpp.o.provides.build: CMakeFiles/alv.dir/alv.cpp.o


# Object files for target alv
alv_OBJECTS = \
"CMakeFiles/alv.dir/alv.cpp.o"

# External object files for target alv
alv_EXTERNAL_OBJECTS =

alv: CMakeFiles/alv.dir/alv.cpp.o
alv: CMakeFiles/alv.dir/build.make
alv: CMakeFiles/alv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/Tree/alv-tree/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable alv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alv.dir/build: alv

.PHONY : CMakeFiles/alv.dir/build

CMakeFiles/alv.dir/requires: CMakeFiles/alv.dir/alv.cpp.o.requires

.PHONY : CMakeFiles/alv.dir/requires

CMakeFiles/alv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/alv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/alv.dir/clean

CMakeFiles/alv.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/Tree/alv-tree && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/Tree/alv-tree /home/jose/Desktop/course_master_algorimh/Tree/alv-tree /home/jose/Desktop/course_master_algorimh/Tree/alv-tree /home/jose/Desktop/course_master_algorimh/Tree/alv-tree /home/jose/Desktop/course_master_algorimh/Tree/alv-tree/CMakeFiles/alv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/alv.dir/depend

