# 0x00. C - Hello, World
***

(![image][https://user-images.githubusercontent.com/98331961/199118348-17ae28b7-3a5b-4ff8-94ed-f497236c6ae3.png](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg))


## General
***

* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

## Requeriments
***

### C

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### Shell Scripts

* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (wc -l file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly #!/bin/bash

## Tasks
***

#### 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.
* The Python file name will be saved in the environment variable $PYFILE

#### 1. Compiler
Write a script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

#### 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

#### 3. Name
Write a script that compiles a C file and creates an executable named cisfun.
* The C file name will be saved in the variable $CFILE

#### 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0

#### 5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

#### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option


#### 8. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
