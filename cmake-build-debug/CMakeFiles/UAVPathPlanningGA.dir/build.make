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
CMAKE_COMMAND = /home/elif/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.5981.166/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/elif/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.5981.166/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elif/CLionProjects/UAVPathPlanningGA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/UAVPathPlanningGA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UAVPathPlanningGA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UAVPathPlanningGA.dir/flags.make

CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o: CMakeFiles/UAVPathPlanningGA.dir/flags.make
CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o -c /home/elif/CLionProjects/UAVPathPlanningGA/src/main.cpp

CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elif/CLionProjects/UAVPathPlanningGA/src/main.cpp > CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.i

CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elif/CLionProjects/UAVPathPlanningGA/src/main.cpp -o CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.s

CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o: CMakeFiles/UAVPathPlanningGA.dir/flags.make
CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o: ../src/SolutionSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o -c /home/elif/CLionProjects/UAVPathPlanningGA/src/SolutionSpace.cpp

CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elif/CLionProjects/UAVPathPlanningGA/src/SolutionSpace.cpp > CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.i

CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elif/CLionProjects/UAVPathPlanningGA/src/SolutionSpace.cpp -o CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.s

CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o: CMakeFiles/UAVPathPlanningGA.dir/flags.make
CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o: ../src/GeneticAlgorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o -c /home/elif/CLionProjects/UAVPathPlanningGA/src/GeneticAlgorithm.cpp

CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elif/CLionProjects/UAVPathPlanningGA/src/GeneticAlgorithm.cpp > CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.i

CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elif/CLionProjects/UAVPathPlanningGA/src/GeneticAlgorithm.cpp -o CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.s

CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o: CMakeFiles/UAVPathPlanningGA.dir/flags.make
CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o: ../src/InputHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o -c /home/elif/CLionProjects/UAVPathPlanningGA/src/InputHandler.cpp

CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elif/CLionProjects/UAVPathPlanningGA/src/InputHandler.cpp > CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.i

CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elif/CLionProjects/UAVPathPlanningGA/src/InputHandler.cpp -o CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.s

# Object files for target UAVPathPlanningGA
UAVPathPlanningGA_OBJECTS = \
"CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o" \
"CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o" \
"CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o" \
"CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o"

# External object files for target UAVPathPlanningGA
UAVPathPlanningGA_EXTERNAL_OBJECTS =

UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/src/main.cpp.o
UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/src/SolutionSpace.cpp.o
UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/src/GeneticAlgorithm.cpp.o
UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/src/InputHandler.cpp.o
UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/build.make
UAVPathPlanningGA: CMakeFiles/UAVPathPlanningGA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable UAVPathPlanningGA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UAVPathPlanningGA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UAVPathPlanningGA.dir/build: UAVPathPlanningGA

.PHONY : CMakeFiles/UAVPathPlanningGA.dir/build

CMakeFiles/UAVPathPlanningGA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UAVPathPlanningGA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UAVPathPlanningGA.dir/clean

CMakeFiles/UAVPathPlanningGA.dir/depend:
	cd /home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elif/CLionProjects/UAVPathPlanningGA /home/elif/CLionProjects/UAVPathPlanningGA /home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug /home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug /home/elif/CLionProjects/UAVPathPlanningGA/cmake-build-debug/CMakeFiles/UAVPathPlanningGA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UAVPathPlanningGA.dir/depend

