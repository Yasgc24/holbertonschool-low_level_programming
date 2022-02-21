#include "main.h"
#include <stdio.h>

/**
* print_rev - Prints a string in reverse
* @s: char
* Return: 0.
*/

void print_rev(char *s)
{
while (*s)
_putchar(*s--);
_putchar('\n');
}
