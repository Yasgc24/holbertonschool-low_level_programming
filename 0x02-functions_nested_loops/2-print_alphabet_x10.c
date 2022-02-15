#include "main.h"

/**
*print_alphabet_x10 - Print alphabet lowercase 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
char alp;
int t;
for (t = 0; t <= 9; t++)
{
for (alp = 'a'; alp <= 'z'; alp++)
  _putchar(alp);
}
_putchar('\n');
}
