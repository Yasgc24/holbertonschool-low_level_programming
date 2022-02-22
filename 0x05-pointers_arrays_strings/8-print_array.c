#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: char
 * @n: char
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0;; ++i)
{
if (a[i] == a[n])
break;
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
