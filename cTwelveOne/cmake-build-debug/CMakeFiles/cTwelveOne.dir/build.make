# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\emili\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\emili\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\emili\CLionProjects\cTwelveOne

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\cTwelveOne.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\cTwelveOne.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\cTwelveOne.dir\flags.make

CMakeFiles\cTwelveOne.dir\main.c.obj: CMakeFiles\cTwelveOne.dir\flags.make
CMakeFiles\cTwelveOne.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cTwelveOne.dir/main.c.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\cTwelveOne.dir\main.c.obj /FdCMakeFiles\cTwelveOne.dir\ /FS -c C:\Users\emili\CLionProjects\cTwelveOne\main.c
<<

CMakeFiles\cTwelveOne.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cTwelveOne.dir/main.c.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\cTwelveOne.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\emili\CLionProjects\cTwelveOne\main.c
<<

CMakeFiles\cTwelveOne.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cTwelveOne.dir/main.c.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\cTwelveOne.dir\main.c.s /c C:\Users\emili\CLionProjects\cTwelveOne\main.c
<<

# Object files for target cTwelveOne
cTwelveOne_OBJECTS = \
"CMakeFiles\cTwelveOne.dir\main.c.obj"

# External object files for target cTwelveOne
cTwelveOne_EXTERNAL_OBJECTS =

cTwelveOne.exe: CMakeFiles\cTwelveOne.dir\main.c.obj
cTwelveOne.exe: CMakeFiles\cTwelveOne.dir\build.make
cTwelveOne.exe: CMakeFiles\cTwelveOne.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cTwelveOne.exe"
	C:\Users\emili\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\cTwelveOne.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\cTwelveOne.dir\objects1.rsp @<<
 /out:cTwelveOne.exe /implib:cTwelveOne.lib /pdb:C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug\cTwelveOne.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\cTwelveOne.dir\build: cTwelveOne.exe

.PHONY : CMakeFiles\cTwelveOne.dir\build

CMakeFiles\cTwelveOne.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cTwelveOne.dir\cmake_clean.cmake
.PHONY : CMakeFiles\cTwelveOne.dir\clean

CMakeFiles\cTwelveOne.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\emili\CLionProjects\cTwelveOne C:\Users\emili\CLionProjects\cTwelveOne C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug C:\Users\emili\CLionProjects\cTwelveOne\cmake-build-debug\CMakeFiles\cTwelveOne.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\cTwelveOne.dir\depend
