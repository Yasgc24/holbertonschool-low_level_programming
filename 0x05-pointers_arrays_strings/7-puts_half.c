#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: char
 * Return: Always 0.
 */

void puts_half(char *str)
{
int n = 0;
int a = 0;
int b;

{
while (str[n++])
a++;

if ((a % 2) == 0)
b = a / 2;

else
b = ((a + 1) / 2);

for (n = b; n < a; n++)
_putchar(str[n]);
}
_putchar('\n');
}
