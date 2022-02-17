#include "main.h"

/**
* print_most_numbers - Prints numbers from 0 to 9, not print 2 and 4
* Return: 0
*/

void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
if ((n != 2) && (n != 4))
_putchar(n);
_putchar('\n');
}
}
