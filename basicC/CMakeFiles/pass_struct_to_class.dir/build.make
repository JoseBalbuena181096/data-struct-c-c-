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
CMAKE_SOURCE_DIR = /media/jose/angel/course_master_algorimh/basicC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/jose/angel/course_master_algorimh/basicC

# Include any dependencies generated for this target.
include CMakeFiles/pass_struct_to_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pass_struct_to_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pass_struct_to_class.dir/flags.make

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o: CMakeFiles/pass_struct_to_class.dir/flags.make
CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o: pass_struct_to_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/jose/angel/course_master_algorimh/basicC/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o -c /media/jose/angel/course_master_algorimh/basicC/pass_struct_to_class.cpp

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/jose/angel/course_master_algorimh/basicC/pass_struct_to_class.cpp > CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.i

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/jose/angel/course_master_algorimh/basicC/pass_struct_to_class.cpp -o CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.s

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.requires:

.PHONY : CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.requires

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.provides: CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.requires
	$(MAKE) -f CMakeFiles/pass_struct_to_class.dir/build.make CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.provides.build
.PHONY : CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.provides

CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.provides.build: CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o


# Object files for target pass_struct_to_class
pass_struct_to_class_OBJECTS = \
"CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o"

# External object files for target pass_struct_to_class
pass_struct_to_class_EXTERNAL_OBJECTS =

pass_struct_to_class: CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o
pass_struct_to_class: CMakeFiles/pass_struct_to_class.dir/build.make
pass_struct_to_class: CMakeFiles/pass_struct_to_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/jose/angel/course_master_algorimh/basicC/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pass_struct_to_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pass_struct_to_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pass_struct_to_class.dir/build: pass_struct_to_class

.PHONY : CMakeFiles/pass_struct_to_class.dir/build

CMakeFiles/pass_struct_to_class.dir/requires: CMakeFiles/pass_struct_to_class.dir/pass_struct_to_class.cpp.o.requires

.PHONY : CMakeFiles/pass_struct_to_class.dir/requires

CMakeFiles/pass_struct_to_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pass_struct_to_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pass_struct_to_class.dir/clean

CMakeFiles/pass_struct_to_class.dir/depend:
	cd /media/jose/angel/course_master_algorimh/basicC && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/jose/angel/course_master_algorimh/basicC /media/jose/angel/course_master_algorimh/basicC /media/jose/angel/course_master_algorimh/basicC /media/jose/angel/course_master_algorimh/basicC /media/jose/angel/course_master_algorimh/basicC/CMakeFiles/pass_struct_to_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pass_struct_to_class.dir/depend

