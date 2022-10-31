# 0x02. C - Functions, nested loops
***


## General
***
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* What are header files and how to to use them with #include

## Requeriments
***
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## Tasks
***

#### 0. _putchar
Write a program that prints _putchar, followed by a new line.
* The program should return 0

#### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet(void);
* You can only use _putchar twice in your code

#### 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Prototype: void print_alphabet_x10(void);
* You can only use _putchar twice in your code

#### 3. islower
Write a function that checks for lowercase character.
* Prototype: int _islower(int c);
* Returns 1 if c is lowercase
* Returns 0 otherwise
FYI: The standard library provides a similar function: islower. Run man islower to learn more.

#### 4. isalpha
Write a function that checks for alphabetic character.
* Prototype: int _isalpha(int c);
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more

#### 5. Sign
Write a function that prints the sign of a number.
* Prototype: int print_sign(int n);
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero

#### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.
* Prototype: int _abs(int);
FYI: The standard library provides a similar function: abs. Run man abs to learn more.

#### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.
* Prototype: int print_last_digit(int);
* Returns the value of the last digit

#### 8. I'm federal agent Jack Bauer, and today is the longest day of my life

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
* Prototype: void jack_bauer(void);
* You can listen to this soundtrack while coding :)

#### 9. Learn your times table
Write a function that prints the 9 times table, starting with 0.
* Prototype: void times_table(void);
* Format: see example

#### 10. a + b
Write a function that adds two integers and returns the result.
* Prototype: int add(int, int);

#### 11. 98 Battery Street, the OG
Write a function that prints all natural numbers from n to 98, followed by a new line.
* Prototype: void print_to_98(int n);
* Numbers must be separated by a comma, followed by a space
* Numbers should be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be 98
* You are allowed to use the standard library
