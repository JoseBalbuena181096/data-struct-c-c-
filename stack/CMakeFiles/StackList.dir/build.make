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
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/stack

# Include any dependencies generated for this target.
include CMakeFiles/StackList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackList.dir/flags.make

CMakeFiles/StackList.dir/StackList.cpp.o: CMakeFiles/StackList.dir/flags.make
CMakeFiles/StackList.dir/StackList.cpp.o: StackList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/stack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StackList.dir/StackList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StackList.dir/StackList.cpp.o -c /home/jose/Desktop/course_master_algorimh/stack/StackList.cpp

CMakeFiles/StackList.dir/StackList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackList.dir/StackList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/stack/StackList.cpp > CMakeFiles/StackList.dir/StackList.cpp.i

CMakeFiles/StackList.dir/StackList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackList.dir/StackList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/stack/StackList.cpp -o CMakeFiles/StackList.dir/StackList.cpp.s

CMakeFiles/StackList.dir/StackList.cpp.o.requires:

.PHONY : CMakeFiles/StackList.dir/StackList.cpp.o.requires

CMakeFiles/StackList.dir/StackList.cpp.o.provides: CMakeFiles/StackList.dir/StackList.cpp.o.requires
	$(MAKE) -f CMakeFiles/StackList.dir/build.make CMakeFiles/StackList.dir/StackList.cpp.o.provides.build
.PHONY : CMakeFiles/StackList.dir/StackList.cpp.o.provides

CMakeFiles/StackList.dir/StackList.cpp.o.provides.build: CMakeFiles/StackList.dir/StackList.cpp.o


# Object files for target StackList
StackList_OBJECTS = \
"CMakeFiles/StackList.dir/StackList.cpp.o"

# External object files for target StackList
StackList_EXTERNAL_OBJECTS =

StackList: CMakeFiles/StackList.dir/StackList.cpp.o
StackList: CMakeFiles/StackList.dir/build.make
StackList: CMakeFiles/StackList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/stack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StackList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StackList.dir/build: StackList

.PHONY : CMakeFiles/StackList.dir/build

CMakeFiles/StackList.dir/requires: CMakeFiles/StackList.dir/StackList.cpp.o.requires

.PHONY : CMakeFiles/StackList.dir/requires

CMakeFiles/StackList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StackList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StackList.dir/clean

CMakeFiles/StackList.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/stack && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/stack /home/jose/Desktop/course_master_algorimh/stack /home/jose/Desktop/course_master_algorimh/stack /home/jose/Desktop/course_master_algorimh/stack /home/jose/Desktop/course_master_algorimh/stack/CMakeFiles/StackList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackList.dir/depend

