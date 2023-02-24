# 0x1B.c


GitHub repository: holbertonschool-low_level_programming
Directory: makefiles
File: 0-Makefile
Create your first Makefile.
Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: none

The given code appears to be a Makefile rule that compiles two
source code files, "main.c" and "school.c", using the gcc
compiler, and creates an executable binary file named "school".
In this case, the target is "all", which means
that running "make all" will execute this rule.
The dependencies are "main.c" and "school.c", and
the command is "gcc main.c school.c -o school".
This rule tells the make utility to compile both
source code files and link them together into
an executable file called "school". The "-o"
option specifies the output file name.
Overall, this code is a simple example of how
to use Makefile rules to compile and link a C
program using the gcc compiler.

File: 1-Makefile
Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files

The given code is a Makefile rule that compiles two source code files, "main.c" and "school.c", using the gcc compiler, and creates an executable binary file named "school".
The Makefile rule defines two variables: "CC" and "SRC". "CC" is assigned the value "gcc", which specifies the C compiler to be used, and "SRC" is assigned the value "main.c school.c", which specifies the source code files to be compiled.
The rule itself specifies that the "all" target depends on the "SRC" variable, which contains the names of the source files. The rule then runs the gcc compiler using the "${CC}" variable (which expands to "gcc") and the "${SRC}" variable (which expands to "main.c school.c"), and specifies the output file name "school" using the "-o" option.
Overall, this code is a more flexible and scalable version of the previous Makefile rule, as it allows for variables to be defined and easily modified, makingit easier to manage and update the build process.

File: 2-Makefile

Create your first useful Makefile.
Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files

The given code is a Makefile rule that compiles two source code files, "main.c" and "school.c", using the gcc compiler, and creates an executable binary file named "school".

The Makefile rule defines four variables: "CC", "SRC", "OBJ", and "NAME". "CC" is assigned the value "gcc", which specifies the C compiler to be used. "SRC" is assigned the value "school.c main.c", which specifies the source code files to be compiled. "OBJ" is a list of object files to be created from the source code files, where the ".c" extension in each source file is replaced with the ".o" extension. "NAME" is the name of the output binary file to be created.

The rule itself specifies that the "all" target depends on the "OBJ" variable, which contains the names of the object files to be created. The rule then runs the gcc compiler using the "${CC}" variable (which expands to "gcc"), the "${OBJ}" variable (which expands to "school.o main.o"), and specifies the output file name using the "${NAME}" variable (which expands to "school").

Overall, this code is a more efficient Makefile rule, as it creates object files for each source file first, and then links them together to create the executable binary file. This reduces the overall compilation time, especially for large projects with many source files.


