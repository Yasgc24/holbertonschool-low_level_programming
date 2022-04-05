#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0;
n = n ^ m;
while (n > 0)
{
if (n & 1)
count ++;
n = n >> 1;
}
return (count);
}
