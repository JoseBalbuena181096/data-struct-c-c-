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
CMAKE_SOURCE_DIR = /home/jose/Desktop/course_master_algorimh/stack/Post

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/course_master_algorimh/stack/Post

# Include any dependencies generated for this target.
include CMakeFiles/InToPost.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/InToPost.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/InToPost.dir/flags.make

CMakeFiles/InToPost.dir/InToPost.cpp.o: CMakeFiles/InToPost.dir/flags.make
CMakeFiles/InToPost.dir/InToPost.cpp.o: InToPost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/course_master_algorimh/stack/Post/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/InToPost.dir/InToPost.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/InToPost.dir/InToPost.cpp.o -c /home/jose/Desktop/course_master_algorimh/stack/Post/InToPost.cpp

CMakeFiles/InToPost.dir/InToPost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InToPost.dir/InToPost.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/course_master_algorimh/stack/Post/InToPost.cpp > CMakeFiles/InToPost.dir/InToPost.cpp.i

CMakeFiles/InToPost.dir/InToPost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InToPost.dir/InToPost.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/course_master_algorimh/stack/Post/InToPost.cpp -o CMakeFiles/InToPost.dir/InToPost.cpp.s

CMakeFiles/InToPost.dir/InToPost.cpp.o.requires:

.PHONY : CMakeFiles/InToPost.dir/InToPost.cpp.o.requires

CMakeFiles/InToPost.dir/InToPost.cpp.o.provides: CMakeFiles/InToPost.dir/InToPost.cpp.o.requires
	$(MAKE) -f CMakeFiles/InToPost.dir/build.make CMakeFiles/InToPost.dir/InToPost.cpp.o.provides.build
.PHONY : CMakeFiles/InToPost.dir/InToPost.cpp.o.provides

CMakeFiles/InToPost.dir/InToPost.cpp.o.provides.build: CMakeFiles/InToPost.dir/InToPost.cpp.o


# Object files for target InToPost
InToPost_OBJECTS = \
"CMakeFiles/InToPost.dir/InToPost.cpp.o"

# External object files for target InToPost
InToPost_EXTERNAL_OBJECTS =

InToPost: CMakeFiles/InToPost.dir/InToPost.cpp.o
InToPost: CMakeFiles/InToPost.dir/build.make
InToPost: CMakeFiles/InToPost.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/course_master_algorimh/stack/Post/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable InToPost"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/InToPost.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/InToPost.dir/build: InToPost

.PHONY : CMakeFiles/InToPost.dir/build

CMakeFiles/InToPost.dir/requires: CMakeFiles/InToPost.dir/InToPost.cpp.o.requires

.PHONY : CMakeFiles/InToPost.dir/requires

CMakeFiles/InToPost.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/InToPost.dir/cmake_clean.cmake
.PHONY : CMakeFiles/InToPost.dir/clean

CMakeFiles/InToPost.dir/depend:
	cd /home/jose/Desktop/course_master_algorimh/stack/Post && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/course_master_algorimh/stack/Post /home/jose/Desktop/course_master_algorimh/stack/Post /home/jose/Desktop/course_master_algorimh/stack/Post /home/jose/Desktop/course_master_algorimh/stack/Post /home/jose/Desktop/course_master_algorimh/stack/Post/CMakeFiles/InToPost.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/InToPost.dir/depend
