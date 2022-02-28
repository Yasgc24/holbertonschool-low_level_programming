#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: byte
 * @n: byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*s++ = b;
i++;
}
return (s);
}
