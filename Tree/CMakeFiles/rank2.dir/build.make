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
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/Tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/Tree

# Include any dependencies generated for this target.
include CMakeFiles/rank2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rank2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rank2.dir/flags.make

CMakeFiles/rank2.dir/rank2.cpp.o: CMakeFiles/rank2.dir/flags.make
CMakeFiles/rank2.dir/rank2.cpp.o: rank2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/Tree/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rank2.dir/rank2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rank2.dir/rank2.cpp.o -c /home/jose/Desktop/course_master_algorimh/Tree/rank2.cpp

CMakeFiles/rank2.dir/rank2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rank2.dir/rank2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/Tree/rank2.cpp > CMakeFiles/rank2.dir/rank2.cpp.i

CMakeFiles/rank2.dir/rank2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rank2.dir/rank2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/Tree/rank2.cpp -o CMakeFiles/rank2.dir/rank2.cpp.s

CMakeFiles/rank2.dir/rank2.cpp.o.requires:

.PHONY : CMakeFiles/rank2.dir/rank2.cpp.o.requires

CMakeFiles/rank2.dir/rank2.cpp.o.provides: CMakeFiles/rank2.dir/rank2.cpp.o.requires
	$(MAKE) -f CMakeFiles/rank2.dir/build.make CMakeFiles/rank2.dir/rank2.cpp.o.provides.build
.PHONY : CMakeFiles/rank2.dir/rank2.cpp.o.provides

CMakeFiles/rank2.dir/rank2.cpp.o.provides.build: CMakeFiles/rank2.dir/rank2.cpp.o


# Object files for target rank2
rank2_OBJECTS = \
"CMakeFiles/rank2.dir/rank2.cpp.o"

# External object files for target rank2
rank2_EXTERNAL_OBJECTS =

rank2: CMakeFiles/rank2.dir/rank2.cpp.o
rank2: CMakeFiles/rank2.dir/build.make
rank2: CMakeFiles/rank2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/Tree/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rank2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rank2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rank2.dir/build: rank2

.PHONY : CMakeFiles/rank2.dir/build

CMakeFiles/rank2.dir/requires: CMakeFiles/rank2.dir/rank2.cpp.o.requires

.PHONY : CMakeFiles/rank2.dir/requires

CMakeFiles/rank2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rank2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rank2.dir/clean

CMakeFiles/rank2.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/Tree && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/Tree /home/jose/Desktop/course_master_algorimh/Tree /home/jose/Desktop/course_master_algorimh/Tree /home/jose/Desktop/course_master_algorimh/Tree /home/jose/Desktop/course_master_algorimh/Tree/CMakeFiles/rank2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rank2.dir/depend
