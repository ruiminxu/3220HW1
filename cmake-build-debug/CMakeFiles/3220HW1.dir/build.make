# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/Storage/C++ Projects/3220HW1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/3220HW1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3220HW1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3220HW1.dir/flags.make

CMakeFiles/3220HW1.dir/main.c.o: CMakeFiles/3220HW1.dir/flags.make
CMakeFiles/3220HW1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/3220HW1.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/3220HW1.dir/main.c.o   -c "/Volumes/Storage/C++ Projects/3220HW1/main.c"

CMakeFiles/3220HW1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3220HW1.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Storage/C++ Projects/3220HW1/main.c" > CMakeFiles/3220HW1.dir/main.c.i

CMakeFiles/3220HW1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3220HW1.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Storage/C++ Projects/3220HW1/main.c" -o CMakeFiles/3220HW1.dir/main.c.s

CMakeFiles/3220HW1.dir/PidManager.c.o: CMakeFiles/3220HW1.dir/flags.make
CMakeFiles/3220HW1.dir/PidManager.c.o: ../PidManager.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/3220HW1.dir/PidManager.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/3220HW1.dir/PidManager.c.o   -c "/Volumes/Storage/C++ Projects/3220HW1/PidManager.c"

CMakeFiles/3220HW1.dir/PidManager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3220HW1.dir/PidManager.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Storage/C++ Projects/3220HW1/PidManager.c" > CMakeFiles/3220HW1.dir/PidManager.c.i

CMakeFiles/3220HW1.dir/PidManager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3220HW1.dir/PidManager.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Storage/C++ Projects/3220HW1/PidManager.c" -o CMakeFiles/3220HW1.dir/PidManager.c.s

# Object files for target 3220HW1
3220HW1_OBJECTS = \
"CMakeFiles/3220HW1.dir/main.c.o" \
"CMakeFiles/3220HW1.dir/PidManager.c.o"

# External object files for target 3220HW1
3220HW1_EXTERNAL_OBJECTS =

3220HW1: CMakeFiles/3220HW1.dir/main.c.o
3220HW1: CMakeFiles/3220HW1.dir/PidManager.c.o
3220HW1: CMakeFiles/3220HW1.dir/build.make
3220HW1: CMakeFiles/3220HW1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable 3220HW1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3220HW1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3220HW1.dir/build: 3220HW1

.PHONY : CMakeFiles/3220HW1.dir/build

CMakeFiles/3220HW1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3220HW1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3220HW1.dir/clean

CMakeFiles/3220HW1.dir/depend:
	cd "/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/Storage/C++ Projects/3220HW1" "/Volumes/Storage/C++ Projects/3220HW1" "/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug" "/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug" "/Volumes/Storage/C++ Projects/3220HW1/cmake-build-debug/CMakeFiles/3220HW1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/3220HW1.dir/depend

