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
CMAKE_SOURCE_DIR = /media/jose/angel/course_master_algorimh/recursion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/jose/angel/course_master_algorimh/recursion

# Include any dependencies generated for this target.
include CMakeFiles/hanoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hanoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hanoi.dir/flags.make

CMakeFiles/hanoi.dir/hanoi.cpp.o: CMakeFiles/hanoi.dir/flags.make
CMakeFiles/hanoi.dir/hanoi.cpp.o: hanoi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jose/angel/course_master_algorimh/recursion/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hanoi.dir/hanoi.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hanoi.dir/hanoi.cpp.o -c /media/jose/angel/course_master_algorimh/recursion/hanoi.cpp

CMakeFiles/hanoi.dir/hanoi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hanoi.dir/hanoi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jose/angel/course_master_algorimh/recursion/hanoi.cpp > CMakeFiles/hanoi.dir/hanoi.cpp.i

CMakeFiles/hanoi.dir/hanoi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hanoi.dir/hanoi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jose/angel/course_master_algorimh/recursion/hanoi.cpp -o CMakeFiles/hanoi.dir/hanoi.cpp.s

CMakeFiles/hanoi.dir/hanoi.cpp.o.requires:

.PHONY : CMakeFiles/hanoi.dir/hanoi.cpp.o.requires

CMakeFiles/hanoi.dir/hanoi.cpp.o.provides: CMakeFiles/hanoi.dir/hanoi.cpp.o.requires
	$(MAKE) -f CMakeFiles/hanoi.dir/build.make CMakeFiles/hanoi.dir/hanoi.cpp.o.provides.build
.PHONY : CMakeFiles/hanoi.dir/hanoi.cpp.o.provides

CMakeFiles/hanoi.dir/hanoi.cpp.o.provides.build: CMakeFiles/hanoi.dir/hanoi.cpp.o


# Object files for target hanoi
hanoi_OBJECTS = \
"CMakeFiles/hanoi.dir/hanoi.cpp.o"

# External object files for target hanoi
hanoi_EXTERNAL_OBJECTS =

hanoi: CMakeFiles/hanoi.dir/hanoi.cpp.o
hanoi: CMakeFiles/hanoi.dir/build.make
hanoi: CMakeFiles/hanoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jose/angel/course_master_algorimh/recursion/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hanoi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hanoi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hanoi.dir/build: hanoi

.PHONY : CMakeFiles/hanoi.dir/build

CMakeFiles/hanoi.dir/requires: CMakeFiles/hanoi.dir/hanoi.cpp.o.requires

.PHONY : CMakeFiles/hanoi.dir/requires

CMakeFiles/hanoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hanoi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hanoi.dir/clean

CMakeFiles/hanoi.dir/depend:
	cd /media/jose/angel/course_master_algorimh/recursion && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jose/angel/course_master_algorimh/recursion /media/jose/angel/course_master_algorimh/recursion /media/jose/angel/course_master_algorimh/recursion /media/jose/angel/course_master_algorimh/recursion /media/jose/angel/course_master_algorimh/recursion/CMakeFiles/hanoi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hanoi.dir/depend

