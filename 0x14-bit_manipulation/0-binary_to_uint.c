#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
unsigned int i = 0;

if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
val <<= 1;
val += b[i] - '0';
i++;
}
return (val);
}
