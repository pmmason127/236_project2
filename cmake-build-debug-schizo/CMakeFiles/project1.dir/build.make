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
CMAKE_SOURCE_DIR = /tmp/tmp.I6inDSxy1I

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo

# Include any dependencies generated for this target.
include CMakeFiles/project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project1.dir/flags.make

CMakeFiles/project1.dir/main.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/main.cpp.o -c /tmp/tmp.I6inDSxy1I/main.cpp

CMakeFiles/project1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/main.cpp > CMakeFiles/project1.dir/main.cpp.i

CMakeFiles/project1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/main.cpp -o CMakeFiles/project1.dir/main.cpp.s

CMakeFiles/project1.dir/Lexer.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project1.dir/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Lexer.cpp.o -c /tmp/tmp.I6inDSxy1I/Lexer.cpp

CMakeFiles/project1.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Lexer.cpp > CMakeFiles/project1.dir/Lexer.cpp.i

CMakeFiles/project1.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Lexer.cpp -o CMakeFiles/project1.dir/Lexer.cpp.s

CMakeFiles/project1.dir/ColonAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/ColonAutomaton.cpp.o: ../ColonAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project1.dir/ColonAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/ColonAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/ColonAutomaton.cpp

CMakeFiles/project1.dir/ColonAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/ColonAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/ColonAutomaton.cpp > CMakeFiles/project1.dir/ColonAutomaton.cpp.i

CMakeFiles/project1.dir/ColonAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/ColonAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/ColonAutomaton.cpp -o CMakeFiles/project1.dir/ColonAutomaton.cpp.s

CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o: ../ColonDashAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/ColonDashAutomaton.cpp

CMakeFiles/project1.dir/ColonDashAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/ColonDashAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/ColonDashAutomaton.cpp > CMakeFiles/project1.dir/ColonDashAutomaton.cpp.i

CMakeFiles/project1.dir/ColonDashAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/ColonDashAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/ColonDashAutomaton.cpp -o CMakeFiles/project1.dir/ColonDashAutomaton.cpp.s

CMakeFiles/project1.dir/Token.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Token.cpp.o: ../Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project1.dir/Token.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Token.cpp.o -c /tmp/tmp.I6inDSxy1I/Token.cpp

CMakeFiles/project1.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Token.cpp > CMakeFiles/project1.dir/Token.cpp.i

CMakeFiles/project1.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Token.cpp -o CMakeFiles/project1.dir/Token.cpp.s

CMakeFiles/project1.dir/CommaAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/CommaAutomaton.cpp.o: ../CommaAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project1.dir/CommaAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/CommaAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/CommaAutomaton.cpp

CMakeFiles/project1.dir/CommaAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/CommaAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/CommaAutomaton.cpp > CMakeFiles/project1.dir/CommaAutomaton.cpp.i

CMakeFiles/project1.dir/CommaAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/CommaAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/CommaAutomaton.cpp -o CMakeFiles/project1.dir/CommaAutomaton.cpp.s

CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o: ../LeftParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/LeftParenAutomaton.cpp

CMakeFiles/project1.dir/LeftParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/LeftParenAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/LeftParenAutomaton.cpp > CMakeFiles/project1.dir/LeftParenAutomaton.cpp.i

CMakeFiles/project1.dir/LeftParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/LeftParenAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/LeftParenAutomaton.cpp -o CMakeFiles/project1.dir/LeftParenAutomaton.cpp.s

CMakeFiles/project1.dir/RightParenAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/RightParenAutomaton.cpp.o: ../RightParenAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project1.dir/RightParenAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/RightParenAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/RightParenAutomaton.cpp

CMakeFiles/project1.dir/RightParenAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/RightParenAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/RightParenAutomaton.cpp > CMakeFiles/project1.dir/RightParenAutomaton.cpp.i

CMakeFiles/project1.dir/RightParenAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/RightParenAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/RightParenAutomaton.cpp -o CMakeFiles/project1.dir/RightParenAutomaton.cpp.s

CMakeFiles/project1.dir/PeriodAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/PeriodAutomaton.cpp.o: ../PeriodAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project1.dir/PeriodAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/PeriodAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/PeriodAutomaton.cpp

CMakeFiles/project1.dir/PeriodAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/PeriodAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/PeriodAutomaton.cpp > CMakeFiles/project1.dir/PeriodAutomaton.cpp.i

CMakeFiles/project1.dir/PeriodAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/PeriodAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/PeriodAutomaton.cpp -o CMakeFiles/project1.dir/PeriodAutomaton.cpp.s

CMakeFiles/project1.dir/QMarkAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/QMarkAutomaton.cpp.o: ../QMarkAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project1.dir/QMarkAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/QMarkAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/QMarkAutomaton.cpp

CMakeFiles/project1.dir/QMarkAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/QMarkAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/QMarkAutomaton.cpp > CMakeFiles/project1.dir/QMarkAutomaton.cpp.i

CMakeFiles/project1.dir/QMarkAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/QMarkAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/QMarkAutomaton.cpp -o CMakeFiles/project1.dir/QMarkAutomaton.cpp.s

CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o: ../MultiplyAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/MultiplyAutomaton.cpp

CMakeFiles/project1.dir/MultiplyAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/MultiplyAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/MultiplyAutomaton.cpp > CMakeFiles/project1.dir/MultiplyAutomaton.cpp.i

CMakeFiles/project1.dir/MultiplyAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/MultiplyAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/MultiplyAutomaton.cpp -o CMakeFiles/project1.dir/MultiplyAutomaton.cpp.s

CMakeFiles/project1.dir/AddAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/AddAutomaton.cpp.o: ../AddAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project1.dir/AddAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/AddAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/AddAutomaton.cpp

CMakeFiles/project1.dir/AddAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/AddAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/AddAutomaton.cpp > CMakeFiles/project1.dir/AddAutomaton.cpp.i

CMakeFiles/project1.dir/AddAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/AddAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/AddAutomaton.cpp -o CMakeFiles/project1.dir/AddAutomaton.cpp.s

CMakeFiles/project1.dir/FactsAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/FactsAutomaton.cpp.o: ../FactsAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/project1.dir/FactsAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/FactsAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/FactsAutomaton.cpp

CMakeFiles/project1.dir/FactsAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/FactsAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/FactsAutomaton.cpp > CMakeFiles/project1.dir/FactsAutomaton.cpp.i

CMakeFiles/project1.dir/FactsAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/FactsAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/FactsAutomaton.cpp -o CMakeFiles/project1.dir/FactsAutomaton.cpp.s

CMakeFiles/project1.dir/SchemesAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/SchemesAutomaton.cpp.o: ../SchemesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/project1.dir/SchemesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/SchemesAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/SchemesAutomaton.cpp

CMakeFiles/project1.dir/SchemesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/SchemesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/SchemesAutomaton.cpp > CMakeFiles/project1.dir/SchemesAutomaton.cpp.i

CMakeFiles/project1.dir/SchemesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/SchemesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/SchemesAutomaton.cpp -o CMakeFiles/project1.dir/SchemesAutomaton.cpp.s

CMakeFiles/project1.dir/QueriesAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/QueriesAutomaton.cpp.o: ../QueriesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/project1.dir/QueriesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/QueriesAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/QueriesAutomaton.cpp

CMakeFiles/project1.dir/QueriesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/QueriesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/QueriesAutomaton.cpp > CMakeFiles/project1.dir/QueriesAutomaton.cpp.i

CMakeFiles/project1.dir/QueriesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/QueriesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/QueriesAutomaton.cpp -o CMakeFiles/project1.dir/QueriesAutomaton.cpp.s

CMakeFiles/project1.dir/RulesAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/RulesAutomaton.cpp.o: ../RulesAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/project1.dir/RulesAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/RulesAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/RulesAutomaton.cpp

CMakeFiles/project1.dir/RulesAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/RulesAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/RulesAutomaton.cpp > CMakeFiles/project1.dir/RulesAutomaton.cpp.i

CMakeFiles/project1.dir/RulesAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/RulesAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/RulesAutomaton.cpp -o CMakeFiles/project1.dir/RulesAutomaton.cpp.s

CMakeFiles/project1.dir/StringAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/StringAutomaton.cpp.o: ../StringAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/project1.dir/StringAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/StringAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/StringAutomaton.cpp

CMakeFiles/project1.dir/StringAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/StringAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/StringAutomaton.cpp > CMakeFiles/project1.dir/StringAutomaton.cpp.i

CMakeFiles/project1.dir/StringAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/StringAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/StringAutomaton.cpp -o CMakeFiles/project1.dir/StringAutomaton.cpp.s

CMakeFiles/project1.dir/CommentAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/CommentAutomaton.cpp.o: ../CommentAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/project1.dir/CommentAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/CommentAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/CommentAutomaton.cpp

CMakeFiles/project1.dir/CommentAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/CommentAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/CommentAutomaton.cpp > CMakeFiles/project1.dir/CommentAutomaton.cpp.i

CMakeFiles/project1.dir/CommentAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/CommentAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/CommentAutomaton.cpp -o CMakeFiles/project1.dir/CommentAutomaton.cpp.s

CMakeFiles/project1.dir/IDAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/IDAutomaton.cpp.o: ../IDAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/project1.dir/IDAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/IDAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/IDAutomaton.cpp

CMakeFiles/project1.dir/IDAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/IDAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/IDAutomaton.cpp > CMakeFiles/project1.dir/IDAutomaton.cpp.i

CMakeFiles/project1.dir/IDAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/IDAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/IDAutomaton.cpp -o CMakeFiles/project1.dir/IDAutomaton.cpp.s

CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o: ../UndefinedAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/UndefinedAutomaton.cpp

CMakeFiles/project1.dir/UndefinedAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/UndefinedAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/UndefinedAutomaton.cpp > CMakeFiles/project1.dir/UndefinedAutomaton.cpp.i

CMakeFiles/project1.dir/UndefinedAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/UndefinedAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/UndefinedAutomaton.cpp -o CMakeFiles/project1.dir/UndefinedAutomaton.cpp.s

CMakeFiles/project1.dir/EoFAutomaton.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/EoFAutomaton.cpp.o: ../EoFAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/project1.dir/EoFAutomaton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/EoFAutomaton.cpp.o -c /tmp/tmp.I6inDSxy1I/EoFAutomaton.cpp

CMakeFiles/project1.dir/EoFAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/EoFAutomaton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/EoFAutomaton.cpp > CMakeFiles/project1.dir/EoFAutomaton.cpp.i

CMakeFiles/project1.dir/EoFAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/EoFAutomaton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/EoFAutomaton.cpp -o CMakeFiles/project1.dir/EoFAutomaton.cpp.s

CMakeFiles/project1.dir/Parser.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Parser.cpp.o: ../Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/project1.dir/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Parser.cpp.o -c /tmp/tmp.I6inDSxy1I/Parser.cpp

CMakeFiles/project1.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Parser.cpp > CMakeFiles/project1.dir/Parser.cpp.i

CMakeFiles/project1.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Parser.cpp -o CMakeFiles/project1.dir/Parser.cpp.s

CMakeFiles/project1.dir/DatalogProgram.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/DatalogProgram.cpp.o: ../DatalogProgram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building CXX object CMakeFiles/project1.dir/DatalogProgram.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/DatalogProgram.cpp.o -c /tmp/tmp.I6inDSxy1I/DatalogProgram.cpp

CMakeFiles/project1.dir/DatalogProgram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/DatalogProgram.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/DatalogProgram.cpp > CMakeFiles/project1.dir/DatalogProgram.cpp.i

CMakeFiles/project1.dir/DatalogProgram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/DatalogProgram.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/DatalogProgram.cpp -o CMakeFiles/project1.dir/DatalogProgram.cpp.s

CMakeFiles/project1.dir/Predicate.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Predicate.cpp.o: ../Predicate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building CXX object CMakeFiles/project1.dir/Predicate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Predicate.cpp.o -c /tmp/tmp.I6inDSxy1I/Predicate.cpp

CMakeFiles/project1.dir/Predicate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Predicate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Predicate.cpp > CMakeFiles/project1.dir/Predicate.cpp.i

CMakeFiles/project1.dir/Predicate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Predicate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Predicate.cpp -o CMakeFiles/project1.dir/Predicate.cpp.s

CMakeFiles/project1.dir/Rule.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Rule.cpp.o: ../Rule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Building CXX object CMakeFiles/project1.dir/Rule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Rule.cpp.o -c /tmp/tmp.I6inDSxy1I/Rule.cpp

CMakeFiles/project1.dir/Rule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Rule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Rule.cpp > CMakeFiles/project1.dir/Rule.cpp.i

CMakeFiles/project1.dir/Rule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Rule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Rule.cpp -o CMakeFiles/project1.dir/Rule.cpp.s

CMakeFiles/project1.dir/Parameter.cpp.o: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/Parameter.cpp.o: ../Parameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_26) "Building CXX object CMakeFiles/project1.dir/Parameter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project1.dir/Parameter.cpp.o -c /tmp/tmp.I6inDSxy1I/Parameter.cpp

CMakeFiles/project1.dir/Parameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/Parameter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.I6inDSxy1I/Parameter.cpp > CMakeFiles/project1.dir/Parameter.cpp.i

CMakeFiles/project1.dir/Parameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/Parameter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.I6inDSxy1I/Parameter.cpp -o CMakeFiles/project1.dir/Parameter.cpp.s

# Object files for target project1
project1_OBJECTS = \
"CMakeFiles/project1.dir/main.cpp.o" \
"CMakeFiles/project1.dir/Lexer.cpp.o" \
"CMakeFiles/project1.dir/ColonAutomaton.cpp.o" \
"CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o" \
"CMakeFiles/project1.dir/Token.cpp.o" \
"CMakeFiles/project1.dir/CommaAutomaton.cpp.o" \
"CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o" \
"CMakeFiles/project1.dir/RightParenAutomaton.cpp.o" \
"CMakeFiles/project1.dir/PeriodAutomaton.cpp.o" \
"CMakeFiles/project1.dir/QMarkAutomaton.cpp.o" \
"CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o" \
"CMakeFiles/project1.dir/AddAutomaton.cpp.o" \
"CMakeFiles/project1.dir/FactsAutomaton.cpp.o" \
"CMakeFiles/project1.dir/SchemesAutomaton.cpp.o" \
"CMakeFiles/project1.dir/QueriesAutomaton.cpp.o" \
"CMakeFiles/project1.dir/RulesAutomaton.cpp.o" \
"CMakeFiles/project1.dir/StringAutomaton.cpp.o" \
"CMakeFiles/project1.dir/CommentAutomaton.cpp.o" \
"CMakeFiles/project1.dir/IDAutomaton.cpp.o" \
"CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o" \
"CMakeFiles/project1.dir/EoFAutomaton.cpp.o" \
"CMakeFiles/project1.dir/Parser.cpp.o" \
"CMakeFiles/project1.dir/DatalogProgram.cpp.o" \
"CMakeFiles/project1.dir/Predicate.cpp.o" \
"CMakeFiles/project1.dir/Rule.cpp.o" \
"CMakeFiles/project1.dir/Parameter.cpp.o"

# External object files for target project1
project1_EXTERNAL_OBJECTS =

project1: CMakeFiles/project1.dir/main.cpp.o
project1: CMakeFiles/project1.dir/Lexer.cpp.o
project1: CMakeFiles/project1.dir/ColonAutomaton.cpp.o
project1: CMakeFiles/project1.dir/ColonDashAutomaton.cpp.o
project1: CMakeFiles/project1.dir/Token.cpp.o
project1: CMakeFiles/project1.dir/CommaAutomaton.cpp.o
project1: CMakeFiles/project1.dir/LeftParenAutomaton.cpp.o
project1: CMakeFiles/project1.dir/RightParenAutomaton.cpp.o
project1: CMakeFiles/project1.dir/PeriodAutomaton.cpp.o
project1: CMakeFiles/project1.dir/QMarkAutomaton.cpp.o
project1: CMakeFiles/project1.dir/MultiplyAutomaton.cpp.o
project1: CMakeFiles/project1.dir/AddAutomaton.cpp.o
project1: CMakeFiles/project1.dir/FactsAutomaton.cpp.o
project1: CMakeFiles/project1.dir/SchemesAutomaton.cpp.o
project1: CMakeFiles/project1.dir/QueriesAutomaton.cpp.o
project1: CMakeFiles/project1.dir/RulesAutomaton.cpp.o
project1: CMakeFiles/project1.dir/StringAutomaton.cpp.o
project1: CMakeFiles/project1.dir/CommentAutomaton.cpp.o
project1: CMakeFiles/project1.dir/IDAutomaton.cpp.o
project1: CMakeFiles/project1.dir/UndefinedAutomaton.cpp.o
project1: CMakeFiles/project1.dir/EoFAutomaton.cpp.o
project1: CMakeFiles/project1.dir/Parser.cpp.o
project1: CMakeFiles/project1.dir/DatalogProgram.cpp.o
project1: CMakeFiles/project1.dir/Predicate.cpp.o
project1: CMakeFiles/project1.dir/Rule.cpp.o
project1: CMakeFiles/project1.dir/Parameter.cpp.o
project1: CMakeFiles/project1.dir/build.make
project1: CMakeFiles/project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_27) "Linking CXX executable project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project1.dir/build: project1

.PHONY : CMakeFiles/project1.dir/build

CMakeFiles/project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project1.dir/clean

CMakeFiles/project1.dir/depend:
	cd /tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.I6inDSxy1I /tmp/tmp.I6inDSxy1I /tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo /tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo /tmp/tmp.I6inDSxy1I/cmake-build-debug-schizo/CMakeFiles/project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project1.dir/depend

