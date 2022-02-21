#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: char
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;

for (i = 0; i < str[i]; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
