#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: var
* @b: var
* Return: n
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
