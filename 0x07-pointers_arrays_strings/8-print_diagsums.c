#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size: int
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int i, n, m;
int s = 0;
int x = 0;

for (i = 0; i < size; i++)
{
m = (i * size) + i;
s += *(a + m);
}
for (n = 0; n < size; n++)
{
m = (n * size) + (size - 1 - n);
x += *(a + m);
}
printf("%d, %d\n", s, x);
}
