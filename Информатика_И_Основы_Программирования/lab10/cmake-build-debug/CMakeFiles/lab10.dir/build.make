# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/sinimawath/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/sinimawath/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sinimawath/CLionProjects/lab10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sinimawath/CLionProjects/lab10/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab10.dir/flags.make

CMakeFiles/lab10.dir/main.cpp.o: CMakeFiles/lab10.dir/flags.make
CMakeFiles/lab10.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab10.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10.dir/main.cpp.o -c /home/sinimawath/CLionProjects/lab10/main.cpp

CMakeFiles/lab10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinimawath/CLionProjects/lab10/main.cpp > CMakeFiles/lab10.dir/main.cpp.i

CMakeFiles/lab10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinimawath/CLionProjects/lab10/main.cpp -o CMakeFiles/lab10.dir/main.cpp.s

CMakeFiles/lab10.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lab10.dir/main.cpp.o.requires

CMakeFiles/lab10.dir/main.cpp.o.provides: CMakeFiles/lab10.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10.dir/build.make CMakeFiles/lab10.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lab10.dir/main.cpp.o.provides

CMakeFiles/lab10.dir/main.cpp.o.provides.build: CMakeFiles/lab10.dir/main.cpp.o


CMakeFiles/lab10.dir/sources/printdict.cpp.o: CMakeFiles/lab10.dir/flags.make
CMakeFiles/lab10.dir/sources/printdict.cpp.o: ../sources/printdict.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab10.dir/sources/printdict.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10.dir/sources/printdict.cpp.o -c /home/sinimawath/CLionProjects/lab10/sources/printdict.cpp

CMakeFiles/lab10.dir/sources/printdict.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10.dir/sources/printdict.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinimawath/CLionProjects/lab10/sources/printdict.cpp > CMakeFiles/lab10.dir/sources/printdict.cpp.i

CMakeFiles/lab10.dir/sources/printdict.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10.dir/sources/printdict.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinimawath/CLionProjects/lab10/sources/printdict.cpp -o CMakeFiles/lab10.dir/sources/printdict.cpp.s

CMakeFiles/lab10.dir/sources/printdict.cpp.o.requires:

.PHONY : CMakeFiles/lab10.dir/sources/printdict.cpp.o.requires

CMakeFiles/lab10.dir/sources/printdict.cpp.o.provides: CMakeFiles/lab10.dir/sources/printdict.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10.dir/build.make CMakeFiles/lab10.dir/sources/printdict.cpp.o.provides.build
.PHONY : CMakeFiles/lab10.dir/sources/printdict.cpp.o.provides

CMakeFiles/lab10.dir/sources/printdict.cpp.o.provides.build: CMakeFiles/lab10.dir/sources/printdict.cpp.o


CMakeFiles/lab10.dir/sources/search.cpp.o: CMakeFiles/lab10.dir/flags.make
CMakeFiles/lab10.dir/sources/search.cpp.o: ../sources/search.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab10.dir/sources/search.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10.dir/sources/search.cpp.o -c /home/sinimawath/CLionProjects/lab10/sources/search.cpp

CMakeFiles/lab10.dir/sources/search.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10.dir/sources/search.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinimawath/CLionProjects/lab10/sources/search.cpp > CMakeFiles/lab10.dir/sources/search.cpp.i

CMakeFiles/lab10.dir/sources/search.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10.dir/sources/search.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinimawath/CLionProjects/lab10/sources/search.cpp -o CMakeFiles/lab10.dir/sources/search.cpp.s

CMakeFiles/lab10.dir/sources/search.cpp.o.requires:

.PHONY : CMakeFiles/lab10.dir/sources/search.cpp.o.requires

CMakeFiles/lab10.dir/sources/search.cpp.o.provides: CMakeFiles/lab10.dir/sources/search.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10.dir/build.make CMakeFiles/lab10.dir/sources/search.cpp.o.provides.build
.PHONY : CMakeFiles/lab10.dir/sources/search.cpp.o.provides

CMakeFiles/lab10.dir/sources/search.cpp.o.provides.build: CMakeFiles/lab10.dir/sources/search.cpp.o


CMakeFiles/lab10.dir/sources/dictionary.cpp.o: CMakeFiles/lab10.dir/flags.make
CMakeFiles/lab10.dir/sources/dictionary.cpp.o: ../sources/dictionary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab10.dir/sources/dictionary.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10.dir/sources/dictionary.cpp.o -c /home/sinimawath/CLionProjects/lab10/sources/dictionary.cpp

CMakeFiles/lab10.dir/sources/dictionary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10.dir/sources/dictionary.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinimawath/CLionProjects/lab10/sources/dictionary.cpp > CMakeFiles/lab10.dir/sources/dictionary.cpp.i

CMakeFiles/lab10.dir/sources/dictionary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10.dir/sources/dictionary.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinimawath/CLionProjects/lab10/sources/dictionary.cpp -o CMakeFiles/lab10.dir/sources/dictionary.cpp.s

CMakeFiles/lab10.dir/sources/dictionary.cpp.o.requires:

.PHONY : CMakeFiles/lab10.dir/sources/dictionary.cpp.o.requires

CMakeFiles/lab10.dir/sources/dictionary.cpp.o.provides: CMakeFiles/lab10.dir/sources/dictionary.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10.dir/build.make CMakeFiles/lab10.dir/sources/dictionary.cpp.o.provides.build
.PHONY : CMakeFiles/lab10.dir/sources/dictionary.cpp.o.provides

CMakeFiles/lab10.dir/sources/dictionary.cpp.o.provides.build: CMakeFiles/lab10.dir/sources/dictionary.cpp.o


CMakeFiles/lab10.dir/sources/util.cpp.o: CMakeFiles/lab10.dir/flags.make
CMakeFiles/lab10.dir/sources/util.cpp.o: ../sources/util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab10.dir/sources/util.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10.dir/sources/util.cpp.o -c /home/sinimawath/CLionProjects/lab10/sources/util.cpp

CMakeFiles/lab10.dir/sources/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10.dir/sources/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinimawath/CLionProjects/lab10/sources/util.cpp > CMakeFiles/lab10.dir/sources/util.cpp.i

CMakeFiles/lab10.dir/sources/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10.dir/sources/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinimawath/CLionProjects/lab10/sources/util.cpp -o CMakeFiles/lab10.dir/sources/util.cpp.s

CMakeFiles/lab10.dir/sources/util.cpp.o.requires:

.PHONY : CMakeFiles/lab10.dir/sources/util.cpp.o.requires

CMakeFiles/lab10.dir/sources/util.cpp.o.provides: CMakeFiles/lab10.dir/sources/util.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10.dir/build.make CMakeFiles/lab10.dir/sources/util.cpp.o.provides.build
.PHONY : CMakeFiles/lab10.dir/sources/util.cpp.o.provides

CMakeFiles/lab10.dir/sources/util.cpp.o.provides.build: CMakeFiles/lab10.dir/sources/util.cpp.o


# Object files for target lab10
lab10_OBJECTS = \
"CMakeFiles/lab10.dir/main.cpp.o" \
"CMakeFiles/lab10.dir/sources/printdict.cpp.o" \
"CMakeFiles/lab10.dir/sources/search.cpp.o" \
"CMakeFiles/lab10.dir/sources/dictionary.cpp.o" \
"CMakeFiles/lab10.dir/sources/util.cpp.o"

# External object files for target lab10
lab10_EXTERNAL_OBJECTS =

lab10: CMakeFiles/lab10.dir/main.cpp.o
lab10: CMakeFiles/lab10.dir/sources/printdict.cpp.o
lab10: CMakeFiles/lab10.dir/sources/search.cpp.o
lab10: CMakeFiles/lab10.dir/sources/dictionary.cpp.o
lab10: CMakeFiles/lab10.dir/sources/util.cpp.o
lab10: CMakeFiles/lab10.dir/build.make
lab10: CMakeFiles/lab10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable lab10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab10.dir/build: lab10

.PHONY : CMakeFiles/lab10.dir/build

CMakeFiles/lab10.dir/requires: CMakeFiles/lab10.dir/main.cpp.o.requires
CMakeFiles/lab10.dir/requires: CMakeFiles/lab10.dir/sources/printdict.cpp.o.requires
CMakeFiles/lab10.dir/requires: CMakeFiles/lab10.dir/sources/search.cpp.o.requires
CMakeFiles/lab10.dir/requires: CMakeFiles/lab10.dir/sources/dictionary.cpp.o.requires
CMakeFiles/lab10.dir/requires: CMakeFiles/lab10.dir/sources/util.cpp.o.requires

.PHONY : CMakeFiles/lab10.dir/requires

CMakeFiles/lab10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab10.dir/clean

CMakeFiles/lab10.dir/depend:
	cd /home/sinimawath/CLionProjects/lab10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sinimawath/CLionProjects/lab10 /home/sinimawath/CLionProjects/lab10 /home/sinimawath/CLionProjects/lab10/cmake-build-debug /home/sinimawath/CLionProjects/lab10/cmake-build-debug /home/sinimawath/CLionProjects/lab10/cmake-build-debug/CMakeFiles/lab10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab10.dir/depend

