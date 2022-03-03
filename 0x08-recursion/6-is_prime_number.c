#include "main.h"
int new_prime_number(int n, int x);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (new_prime_number(n, n - 1));
}
/**
 * new_prime_number - calculates a number prime
 * @n: number
 * @x: int
 * Return: 1 or 0
 */

int new_prime_number(int n, int x)
{
if (x == 1)
return (1);
if (n % x == 0 && x > 0)
return (0);
return (new_prime_number(n, x - 1));
}
