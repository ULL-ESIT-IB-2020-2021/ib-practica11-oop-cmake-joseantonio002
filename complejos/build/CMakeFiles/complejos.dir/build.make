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
CMAKE_SOURCE_DIR = /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build

# Include any dependencies generated for this target.
include CMakeFiles/complejos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/complejos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/complejos.dir/flags.make

CMakeFiles/complejos.dir/src/complejos.cc.o: CMakeFiles/complejos.dir/flags.make
CMakeFiles/complejos.dir/src/complejos.cc.o: ../src/complejos.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/complejos.dir/src/complejos.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/complejos.dir/src/complejos.cc.o -c /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/complejos.cc

CMakeFiles/complejos.dir/src/complejos.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/complejos.dir/src/complejos.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/complejos.cc > CMakeFiles/complejos.dir/src/complejos.cc.i

CMakeFiles/complejos.dir/src/complejos.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/complejos.dir/src/complejos.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/complejos.cc -o CMakeFiles/complejos.dir/src/complejos.cc.s

CMakeFiles/complejos.dir/src/complejos.cc.o.requires:

.PHONY : CMakeFiles/complejos.dir/src/complejos.cc.o.requires

CMakeFiles/complejos.dir/src/complejos.cc.o.provides: CMakeFiles/complejos.dir/src/complejos.cc.o.requires
	$(MAKE) -f CMakeFiles/complejos.dir/build.make CMakeFiles/complejos.dir/src/complejos.cc.o.provides.build
.PHONY : CMakeFiles/complejos.dir/src/complejos.cc.o.provides

CMakeFiles/complejos.dir/src/complejos.cc.o.provides.build: CMakeFiles/complejos.dir/src/complejos.cc.o


CMakeFiles/complejos.dir/src/main_complejos.cc.o: CMakeFiles/complejos.dir/flags.make
CMakeFiles/complejos.dir/src/main_complejos.cc.o: ../src/main_complejos.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/complejos.dir/src/main_complejos.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/complejos.dir/src/main_complejos.cc.o -c /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/main_complejos.cc

CMakeFiles/complejos.dir/src/main_complejos.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/complejos.dir/src/main_complejos.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/main_complejos.cc > CMakeFiles/complejos.dir/src/main_complejos.cc.i

CMakeFiles/complejos.dir/src/main_complejos.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/complejos.dir/src/main_complejos.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/src/main_complejos.cc -o CMakeFiles/complejos.dir/src/main_complejos.cc.s

CMakeFiles/complejos.dir/src/main_complejos.cc.o.requires:

.PHONY : CMakeFiles/complejos.dir/src/main_complejos.cc.o.requires

CMakeFiles/complejos.dir/src/main_complejos.cc.o.provides: CMakeFiles/complejos.dir/src/main_complejos.cc.o.requires
	$(MAKE) -f CMakeFiles/complejos.dir/build.make CMakeFiles/complejos.dir/src/main_complejos.cc.o.provides.build
.PHONY : CMakeFiles/complejos.dir/src/main_complejos.cc.o.provides

CMakeFiles/complejos.dir/src/main_complejos.cc.o.provides.build: CMakeFiles/complejos.dir/src/main_complejos.cc.o


# Object files for target complejos
complejos_OBJECTS = \
"CMakeFiles/complejos.dir/src/complejos.cc.o" \
"CMakeFiles/complejos.dir/src/main_complejos.cc.o"

# External object files for target complejos
complejos_EXTERNAL_OBJECTS =

complejos: CMakeFiles/complejos.dir/src/complejos.cc.o
complejos: CMakeFiles/complejos.dir/src/main_complejos.cc.o
complejos: CMakeFiles/complejos.dir/build.make
complejos: CMakeFiles/complejos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable complejos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/complejos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/complejos.dir/build: complejos

.PHONY : CMakeFiles/complejos.dir/build

CMakeFiles/complejos.dir/requires: CMakeFiles/complejos.dir/src/complejos.cc.o.requires
CMakeFiles/complejos.dir/requires: CMakeFiles/complejos.dir/src/main_complejos.cc.o.requires

.PHONY : CMakeFiles/complejos.dir/requires

CMakeFiles/complejos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/complejos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/complejos.dir/clean

CMakeFiles/complejos.dir/depend:
	cd /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build /home/usuario/ib-practica11-oop-cmake-joseantonio002/complejos/build/CMakeFiles/complejos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/complejos.dir/depend

