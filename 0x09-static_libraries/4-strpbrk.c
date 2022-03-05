#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int n;

while (s[i] != '\0')
{
n = 0;
while (accept[n] != '\0')
{
if (s[i] == accept[n])
{
return (s + i);
}
n++;
}
i++;
}
return (0);
}
