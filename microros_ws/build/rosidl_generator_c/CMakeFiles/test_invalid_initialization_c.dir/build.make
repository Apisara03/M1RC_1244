# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orin_nano/microros_ws/build/rosidl_generator_c

# Include any dependencies generated for this target.
include CMakeFiles/test_invalid_initialization_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_invalid_initialization_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_invalid_initialization_c.dir/flags.make

CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o: CMakeFiles/test_invalid_initialization_c.dir/flags.make
CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o: /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c/test/test_invalid_initialization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/orin_nano/microros_ws/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o   -c /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c/test/test_invalid_initialization.c

CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c/test/test_invalid_initialization.c > CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.i

CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c/test/test_invalid_initialization.c -o CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.s

# Object files for target test_invalid_initialization_c
test_invalid_initialization_c_OBJECTS = \
"CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o"

# External object files for target test_invalid_initialization_c
test_invalid_initialization_c_EXTERNAL_OBJECTS =

test_invalid_initialization_c: CMakeFiles/test_invalid_initialization_c.dir/test/test_invalid_initialization.c.o
test_invalid_initialization_c: CMakeFiles/test_invalid_initialization_c.dir/build.make
test_invalid_initialization_c: librosidl_generator_c_interfaces__rosidl_generator_c.so
test_invalid_initialization_c: /opt/ros/foxy/lib/librcutils.so
test_invalid_initialization_c: /opt/ros/foxy/lib/librcutils.so
test_invalid_initialization_c: /home/orin_nano/microros_ws/install/rosidl_runtime_c/lib/librosidl_runtime_c.so
test_invalid_initialization_c: /home/orin_nano/microros_ws/install/rosidl_runtime_c/lib/librosidl_runtime_c.so
test_invalid_initialization_c: /opt/ros/foxy/lib/librcutils.so
test_invalid_initialization_c: CMakeFiles/test_invalid_initialization_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/orin_nano/microros_ws/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_invalid_initialization_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_invalid_initialization_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_invalid_initialization_c.dir/build: test_invalid_initialization_c

.PHONY : CMakeFiles/test_invalid_initialization_c.dir/build

CMakeFiles/test_invalid_initialization_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_invalid_initialization_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_invalid_initialization_c.dir/clean

CMakeFiles/test_invalid_initialization_c.dir/depend:
	cd /home/orin_nano/microros_ws/build/rosidl_generator_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c /home/orin_nano/microros_ws/rosidl-foxy/rosidl_generator_c /home/orin_nano/microros_ws/build/rosidl_generator_c /home/orin_nano/microros_ws/build/rosidl_generator_c /home/orin_nano/microros_ws/build/rosidl_generator_c/CMakeFiles/test_invalid_initialization_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_invalid_initialization_c.dir/depend

