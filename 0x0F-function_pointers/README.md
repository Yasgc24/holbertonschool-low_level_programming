0x0F. C - Function pointers

It's possible to take the address of a function, too. And, similarly to arrays, functions decay to pointers when their names are used. So if you wanted the address of, say, strcpy, you could say either strcpy or &strcpy. (&strcpy[0] won't work for obvious reasons.)

When you call a function, you use an operator called the function call operator. The function call operator takes a function pointer on its left side.

A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say

int func(int a, float b);
and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:

/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);
Once you've got the pointer, you can assign the address of the right sort of function just by using its name: like an array, a function name is turned into an address when it's used in an expression. You can call the function using one of two forms:

(*func)(1,2);
/* or */
func(1,2);

Tasks

0. What's my name

Write a function that prints a name.
-Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.
-Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
-where size is the size of the array
-and action is a pointer to the function you need to use

2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.
-Prototype: int int_index(int *array, int size, int (*cmp)(int));
-where size is the number of elements in the array array
-cmp is a pointer to the function to be used to compare values
-int_index returns the index of the first element for which the cmp function does not return 0
-If no element matches, return -1
-If size <= 0, return -1

3. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.
-You are allowed to use the standard library
-Usage: calc num1 operator num2
-You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
-operator is one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo
-The program prints the result of the operation, followed by a new line
-You can assume that the result of all operations can be stored in an int
-if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
-if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
-if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
This task requires that you create four different files.

3-calc.h

This file should contain all the function prototypes and data structures used by the program.

3-op_functions.c

This file should contain the 5 following functions (not more):
-op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
-op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
-op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
-op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
-op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

-Prototype: int (*get_op_func(char *s))(int, int);
-where s is the operator passed as argument to the program
-This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
-You are not allowed to use switch statements
-You are not allowed to use for or do ... while loops
-You are not allowed to use goto
-You are not allowed to use else
-You are not allowed to use more than one if statement in your code
-You are not allowed to use more than one while loop in your code
-If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL

-You are only allowed to declare these two variables in this function:
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

3-main.c

This file should contain your main function only.
-You are not allowed to code any other function than main in this file
-You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
-You have to use atoi to convert arguments to int
-You are not allowed to use any kind of loop
-You are allowed to use a maximum of 3 if statements
