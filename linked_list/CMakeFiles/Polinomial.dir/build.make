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
include CMakeFiles/Polinomial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Polinomial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Polinomial.dir/flags.make

CMakeFiles/Polinomial.dir/Polinomial.cpp.o: CMakeFiles/Polinomial.dir/flags.make
CMakeFiles/Polinomial.dir/Polinomial.cpp.o: Polinomial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Polinomial.dir/Polinomial.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polinomial.dir/Polinomial.cpp.o -c /home/jose/Desktop/course_master_algorimh/linked_list/Polinomial.cpp

CMakeFiles/Polinomial.dir/Polinomial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polinomial.dir/Polinomial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/linked_list/Polinomial.cpp > CMakeFiles/Polinomial.dir/Polinomial.cpp.i

CMakeFiles/Polinomial.dir/Polinomial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polinomial.dir/Polinomial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/linked_list/Polinomial.cpp -o CMakeFiles/Polinomial.dir/Polinomial.cpp.s

CMakeFiles/Polinomial.dir/Polinomial.cpp.o.requires:

.PHONY : CMakeFiles/Polinomial.dir/Polinomial.cpp.o.requires

CMakeFiles/Polinomial.dir/Polinomial.cpp.o.provides: CMakeFiles/Polinomial.dir/Polinomial.cpp.o.requires
	$(MAKE) -f CMakeFiles/Polinomial.dir/build.make CMakeFiles/Polinomial.dir/Polinomial.cpp.o.provides.build
.PHONY : CMakeFiles/Polinomial.dir/Polinomial.cpp.o.provides

CMakeFiles/Polinomial.dir/Polinomial.cpp.o.provides.build: CMakeFiles/Polinomial.dir/Polinomial.cpp.o


# Object files for target Polinomial
Polinomial_OBJECTS = \
"CMakeFiles/Polinomial.dir/Polinomial.cpp.o"

# External object files for target Polinomial
Polinomial_EXTERNAL_OBJECTS =

Polinomial: CMakeFiles/Polinomial.dir/Polinomial.cpp.o
Polinomial: CMakeFiles/Polinomial.dir/build.make
Polinomial: CMakeFiles/Polinomial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Polinomial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polinomial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Polinomial.dir/build: Polinomial

.PHONY : CMakeFiles/Polinomial.dir/build

CMakeFiles/Polinomial.dir/requires: CMakeFiles/Polinomial.dir/Polinomial.cpp.o.requires

.PHONY : CMakeFiles/Polinomial.dir/requires

CMakeFiles/Polinomial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Polinomial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Polinomial.dir/clean

CMakeFiles/Polinomial.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/linked_list && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list /home/jose/Desktop/course_master_algorimh/linked_list/CMakeFiles/Polinomial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Polinomial.dir/depend

