#include "main.h"

/**
* print_to_98 - Prints all natural numbers
* @n: character
* Return: 0
*/

void print_to_98(int n)
{
int na = 98;
while (n != na)
{
_putchar('n');
_putchar(',');
_putchar(' ');
if (n > na)
n--;
else
n++;
}
_putchar(na);
_putchar('\n');
}
