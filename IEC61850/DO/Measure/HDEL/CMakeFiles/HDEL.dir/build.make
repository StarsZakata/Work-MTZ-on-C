# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/sergey/Загрузки/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sergey/Загрузки/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sergey/Документы/DATA/CLion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sergey/Документы/DATA/CLion

# Include any dependencies generated for this target.
include IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/depend.make
# Include the progress variables for this target.
include IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/progress.make

# Include the compile flags for this target's objects.
include IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/flags.make

IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.o: IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/flags.make
IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.o: IEC61850/DO/Measure/HDEL/HDEL.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergey/Документы/DATA/CLion/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.o"
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HDEL.dir/HDEL.cpp.o -c /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL/HDEL.cpp

IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HDEL.dir/HDEL.cpp.i"
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL/HDEL.cpp > CMakeFiles/HDEL.dir/HDEL.cpp.i

IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HDEL.dir/HDEL.cpp.s"
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL/HDEL.cpp -o CMakeFiles/HDEL.dir/HDEL.cpp.s

# Object files for target HDEL
HDEL_OBJECTS = \
"CMakeFiles/HDEL.dir/HDEL.cpp.o"

# External object files for target HDEL
HDEL_EXTERNAL_OBJECTS =

IEC61850/DO/Measure/HDEL/libHDEL.a: IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/HDEL.cpp.o
IEC61850/DO/Measure/HDEL/libHDEL.a: IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/build.make
IEC61850/DO/Measure/HDEL/libHDEL.a: IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sergey/Документы/DATA/CLion/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libHDEL.a"
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && $(CMAKE_COMMAND) -P CMakeFiles/HDEL.dir/cmake_clean_target.cmake
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HDEL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/build: IEC61850/DO/Measure/HDEL/libHDEL.a
.PHONY : IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/build

IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/clean:
	cd /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL && $(CMAKE_COMMAND) -P CMakeFiles/HDEL.dir/cmake_clean.cmake
.PHONY : IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/clean

IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/depend:
	cd /home/sergey/Документы/DATA/CLion && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sergey/Документы/DATA/CLion /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL /home/sergey/Документы/DATA/CLion /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL /home/sergey/Документы/DATA/CLion/IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : IEC61850/DO/Measure/HDEL/CMakeFiles/HDEL.dir/depend

