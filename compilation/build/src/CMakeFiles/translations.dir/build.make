# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build

# Utility rule file for translations.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/translations.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/translations.dir/progress.make

src/CMakeFiles/translations: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.qm
src/CMakeFiles/translations: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.qm

/home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.qm: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.qm"
	cd /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/src && /usr/lib/qt5/bin/lrelease /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.ts -qm /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.qm

/home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.qm: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.qm"
	cd /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/src && /usr/lib/qt5/bin/lrelease /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.ts -qm /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.qm

translations: src/CMakeFiles/translations
translations: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_en_EN.qm
translations: /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src/translations/lang_pt_BR.qm
translations: src/CMakeFiles/translations.dir/build.make
.PHONY : translations

# Rule to build all files generated by this target.
src/CMakeFiles/translations.dir/build: translations
.PHONY : src/CMakeFiles/translations.dir/build

src/CMakeFiles/translations.dir/clean:
	cd /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/src && $(CMAKE_COMMAND) -P CMakeFiles/translations.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/translations.dir/clean

src/CMakeFiles/translations.dir/depend:
	cd /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/src /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/src /home/runner/work/Jibreel-compiler/Jibreel-compiler/corectrl/build/src/CMakeFiles/translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/translations.dir/depend

