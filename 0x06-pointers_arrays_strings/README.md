# 0x06. C - More pointers, arrays and strings
***

![](https://user-images.githubusercontent.com/98331961/199131054-44058947-9615-4532-b452-aa8f2f41c1de.png)

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
#### 0. strcat
Write a function that concatenates two strings.
* Prototype: char *_strcat(char *dest, char *src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

#### 1. strncat
Write a function that concatenates two strings.
* Prototype: char *_strncat(char *dest, char *src, int n);
* The _strncat function is similar to the _strcat function, except that
  * it will use at most n bytes from src; and
  * src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

#### 2. strncpy
Write a function that copies a string.
* Prototype: char *_strncpy(char *dest, char *src, int n);
* Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

#### 3. strcmp
Write a function that compares two strings.
* Prototype: int _strcmp(char *s1, char *s2);
* Your function should work exactly like strcmp
FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

#### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
Write a function that reverses the content of an array of integers.
* Prototype: void reverse_array(int *a, int n);
* Where n is the number of elements of the array

#### 5. Always look up
Write a function that changes all lowercase letters of a string to uppercase.
* Prototype: char *string_toupper(char *);

#### 6. Expect the best. Prepare for the worst. Capitalize on what comes
Write a function that capitalizes all words of a string.
* Prototype: char *cap_string(char *);
* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

#### 7. Mozart composed his music not for the elite, but for everybody
Write a function that encodes a string into 1337.
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* Prototype: char *leet(char *);
* You can only use one if in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation

#### 8. rot13
Write a function that encodes a string using rot13.
* Prototype: char *rot13(char *);
* You can only use if statement once in your code
* You are not allowed to use else if
* You are not allowed to use else
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation

#### 9. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.
* Prototype: void print_number(int n);
* You can only use _putchar function to print
*  You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values
