#include "main.h"

/**
* print_diagonal - Draw a diagonal line
* @n: character
* Return: 0
*/

void print_diagonal(int n)
{
int l;
int d;

if (n > 0)
{
for (l = 0; l < n; l++)
{
for (d = 0; d < l; d++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
