# 0x01. C - Variables, if, else, while
***


## General
***
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the if, if ... else statements
* How to use comments
* How to declare variables of types char, int, unsigned int
* How to assign values to variables
* How to print the values of variables of type char, int, unsigned int with printf
* How to use the while loop
* How to use variables with the while loop
* How to print variables using printf
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64

## Requeriments
***
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Tasks
***

#### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
* You can find the source code here
* The variable n will store a different value every time you will run this program
* You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
* The output of the program should be:
  * The number, followed by
    * if the number is greater than 0: is positive
    * if the number is 0: is zero
    * if the number is less than 0: is negative
  * followed by a new line

#### 1. The last digit
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
* You can find the source code here
* The variable n will store a different value every time you run this program
* You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
  * The string Last digit of, followed by
  * n, followed by
  * the string is, followed by
    * if the last digit of n is greater than 5: the string and is greater than 5
    * if the last digit of n is 0: the string and is 0
    * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
  * followed by a new line

#### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

#### 3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code

#### 4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.
* Print all the letters except q and e
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

#### 5. Numbers
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
* All your code should be in the main function

#### 6. Numberz
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
* You are not allowed to use any variable of type char
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* You can only use putchar twice in your code
* All your code should be in the main function

#### 7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

#### 8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code

#### 9. Patience, persistence and perspiration make an unbeatable combination for success
Write a program that prints all possible combinations of single-digit numbers.
* Numbers must be separated by ,, followed by a space
* Numbers should be printed in ascending order
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar four times maximum in your code
* You are not allowed to use any variable of type char
