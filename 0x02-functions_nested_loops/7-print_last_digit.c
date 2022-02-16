#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @lst: character
* Return: 0
*/

int print_last_digit(int lst)
{
if (lst > 0)
{
lst = lst % 10;
_putchar(lst + '0');
}
else
{
lst = lst % 10 * -1;
_putchar(lst + '0');
}
return (lst);
}
