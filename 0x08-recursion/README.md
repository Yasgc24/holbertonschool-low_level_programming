# 0x08. C - Recursion
***

![image](https://user-images.githubusercontent.com/98331961/199132883-cb26dabf-e9b3-46c7-8f1f-8e7cd3c063e4.png)


## General
***
* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

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
* You are not allowed to use any kind of loops
* You are not allowed to use static variables

## Tasks
***
#### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.
* Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

#### 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.
* Prototype: void _print_rev_recursion(char *s);

#### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.
* Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

#### 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.
* Prototype: int factorial(int n);
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1

#### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of x raised to the power of y.
* Prototype: int _pow_recursion(int x, int y);
* If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.

#### 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.
* Prototype: int _sqrt_recursion(int n);
* If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

#### 6. Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
* Prototype: int is_prime_number(int n);
