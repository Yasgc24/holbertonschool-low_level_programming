#include "main.h"

/**
* print_to_98 - Prints all natural numbers
* @n: character
* Return: 0
*/

void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("%d\n", 98);
}
