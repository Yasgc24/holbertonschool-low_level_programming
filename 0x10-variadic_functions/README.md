0x10. C - Variadic functions

Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.

Values of the passed arguments can be accessed through the header file named as:

#include <stdarg.h>

<stdarg.h> includes the following methods:

-va_start(va_list ap, argN): This enables access to variadic function arguments.
-va_arg(va_list ap, type): This one accesses the next variadic function argument.
-va_copy(va_list dest, va_list src): This makes a copy of the variadic function arguments.
-va_end(va_list ap): This ends the traversal of the variadic function arguments.

Tasks

0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.
-Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.
-Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
-where separator is the string to be printed between numbers
-and n is the number of integers passed to the function
-You are allowed to use printf
-If separator is NULL, don’t print it
-Print a new line at the end of your function

2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.
-Prototype: void print_strings(const char *separator, const unsigned int n, ...);
-where separator is the string to be printed between the strings
-and n is the number of strings passed to the function
-You are allowed to use printf
-If separator is NULL, don’t print it
-If one of the string is NULL, print (nil) instead
-Print a new line at the end of your function

3. To be is a to be the value of a variable

Write a function that prints anything.
-Prototype: void print_all(const char * const format, ...);
-where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example
-You are not allowed to use for, goto, ternary operator, else, do ... while
-You can use a maximum of
2 while loops
2 if
-You can declare a maximum of 9 variables
-You are allowed to use printf
-Print a new line at the end of your function
