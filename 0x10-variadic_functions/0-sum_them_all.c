#include "variadic_functions.h"
/**
 * sum_them_all -  sum of all its parameters
 * @n: parameter
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int Sum = 0;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
Sum += va_arg(ptr, int);
va_end(ptr);
return (Sum);
}
