#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: char
 * @n: char
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b < n - 1)
{
printf(", ");
}
}
printf("\n");
}
