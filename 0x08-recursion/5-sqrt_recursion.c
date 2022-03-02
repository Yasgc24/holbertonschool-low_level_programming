#include "main.h"
int n__sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (n__sqrt_recursion(n, 0));
}

/**
 * n__sqrt_recursion - recursion to find the square root
 * @n: number
 * @x: int
 * Return: square root
 */

int n__sqrt_recursion(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (n__sqrt_recursion(n, x + 1));
}
