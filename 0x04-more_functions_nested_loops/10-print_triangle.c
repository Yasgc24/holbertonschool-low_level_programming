#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: character
* Return: 0
*/

void print_triangle(int size)
{
int a;
int b;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= size - a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
