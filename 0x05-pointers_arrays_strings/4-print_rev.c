#include "main.h"
#include <stdio.h>

/**
* print_rev - Prints a string in reverse
* @s: char
* Return: 0.
*/

void print_rev(char *s)
{
int n = 0;

while (s[n] != 0)
{
n++;
}
while (n > 0)
{
n--;
_putchar(s[n]);
}
_putchar('\n');
}

