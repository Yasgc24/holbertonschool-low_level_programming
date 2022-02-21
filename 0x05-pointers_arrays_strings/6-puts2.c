#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: char
 * Return: Always 0.
 */

void puts2(char *str)
{
int i = 0;
int n = 0;

while (str[i++])
n++;

for (i = 0; i < n; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
