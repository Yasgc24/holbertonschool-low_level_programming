#include "main.h"

/**
*more_numbers - Print 10 times numbers from 0 to 14
*Return: 0
*/
void more_numbers(void)
{
int n;
int t;
for (t = 0; t <= 9; t++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
