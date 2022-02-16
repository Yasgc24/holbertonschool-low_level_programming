#include "main.h"

/**
* jack_bauer - Prints every minute of the day
* Return: 0
*/

void jack_bauer(void)
{
int hor;
int min;

for (hor = 0; hor <= 23; hor++)
{
for (min = 0; min <= 59; min++)
	{
_putchar((hor / 10) + '0');
_putchar((hor % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
