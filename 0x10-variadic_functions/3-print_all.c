#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of arg
 * Return: 0
 */

void print_all(const char * const format, ...)
{
va_list l;
int n = 0, a = 0;
char *s = ", ";
char *st;

va_start(l, format);
while (format && format[a])
a++;
while (format && format[n])
{
if (n == (a - 1))
{
s = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(l, int), s);
break;
case 'i':
printf("%d%s", va_arg(l, int), s);
break;
case 'f':
printf("%f%s", va_arg(l, double), s);
break;
case 's':
st = va_arg(l, char *);
if (st == NULL)
st = "(nil)";
printf("%s%s", st, s);
break;
}
n++;
}
printf("\n");
va_end(l);
}

