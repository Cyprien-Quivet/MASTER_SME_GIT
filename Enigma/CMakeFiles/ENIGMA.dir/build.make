# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma

# Include any dependencies generated for this target.
include CMakeFiles/ENIGMA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ENIGMA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ENIGMA.dir/flags.make

CMakeFiles/ENIGMA.dir/main.c.o: CMakeFiles/ENIGMA.dir/flags.make
CMakeFiles/ENIGMA.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ENIGMA.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ENIGMA.dir/main.c.o   -c /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/main.c

CMakeFiles/ENIGMA.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ENIGMA.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/main.c > CMakeFiles/ENIGMA.dir/main.c.i

CMakeFiles/ENIGMA.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ENIGMA.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/main.c -o CMakeFiles/ENIGMA.dir/main.c.s

CMakeFiles/ENIGMA.dir/enigma.c.o: CMakeFiles/ENIGMA.dir/flags.make
CMakeFiles/ENIGMA.dir/enigma.c.o: enigma.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ENIGMA.dir/enigma.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ENIGMA.dir/enigma.c.o   -c /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/enigma.c

CMakeFiles/ENIGMA.dir/enigma.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ENIGMA.dir/enigma.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/enigma.c > CMakeFiles/ENIGMA.dir/enigma.c.i

CMakeFiles/ENIGMA.dir/enigma.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ENIGMA.dir/enigma.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/enigma.c -o CMakeFiles/ENIGMA.dir/enigma.c.s

CMakeFiles/ENIGMA.dir/ihm.c.o: CMakeFiles/ENIGMA.dir/flags.make
CMakeFiles/ENIGMA.dir/ihm.c.o: ihm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ENIGMA.dir/ihm.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ENIGMA.dir/ihm.c.o   -c /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/ihm.c

CMakeFiles/ENIGMA.dir/ihm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ENIGMA.dir/ihm.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/ihm.c > CMakeFiles/ENIGMA.dir/ihm.c.i

CMakeFiles/ENIGMA.dir/ihm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ENIGMA.dir/ihm.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/ihm.c -o CMakeFiles/ENIGMA.dir/ihm.c.s

# Object files for target ENIGMA
ENIGMA_OBJECTS = \
"CMakeFiles/ENIGMA.dir/main.c.o" \
"CMakeFiles/ENIGMA.dir/enigma.c.o" \
"CMakeFiles/ENIGMA.dir/ihm.c.o"

# External object files for target ENIGMA
ENIGMA_EXTERNAL_OBJECTS =

ENIGMA: CMakeFiles/ENIGMA.dir/main.c.o
ENIGMA: CMakeFiles/ENIGMA.dir/enigma.c.o
ENIGMA: CMakeFiles/ENIGMA.dir/ihm.c.o
ENIGMA: CMakeFiles/ENIGMA.dir/build.make
ENIGMA: CMakeFiles/ENIGMA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ENIGMA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ENIGMA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ENIGMA.dir/build: ENIGMA

.PHONY : CMakeFiles/ENIGMA.dir/build

CMakeFiles/ENIGMA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ENIGMA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ENIGMA.dir/clean

CMakeFiles/ENIGMA.dir/depend:
	cd /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma /Users/cyprienquivet/Documents/GIT/MASTER_SME_GIT/Enigma/CMakeFiles/ENIGMA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ENIGMA.dir/depend

