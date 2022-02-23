#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: int
* @n: int
*/

void reverse_array(int *a, int n)
{
int b = 0;
int t;

n = n - 1;

while (b < n)
{
t = a[b];
a[b] = a[n];
a[n] = t;
b++;
n--;
}
}
