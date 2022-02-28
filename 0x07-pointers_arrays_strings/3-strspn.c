#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int i = 0;
int n = 0;

while (s[i] != '\0')
{
while (accept[n] != '\0')
{
if (accept[n] == s[i])
count++;
n++;
}
n = 0;
i++;
if (s[i] == 32)
{
break;
}
}
return (count);
}
