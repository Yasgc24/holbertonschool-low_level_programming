#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int a;
char *b;

va_start(p, n);
for (a = 0; a < n; a++)
{
b = va_arg(p, char *);
if (b != NULL)
printf("%s", b);
else
printf("(nil)");
if (separator != NULL && a < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(p);
}


