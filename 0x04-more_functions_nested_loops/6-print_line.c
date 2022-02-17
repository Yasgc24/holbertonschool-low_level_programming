#include "main.h"

/**
* print_line - Draw a straight line
* @n: character
* Return: 0
*/

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
