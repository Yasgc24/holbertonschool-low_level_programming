#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Reverses a string
 * @s: char
 * Return: Always 0.
*/

char *string_toupper(char *s)
{
int n = 0;
while (s[n] != '\0')
{
if (s[n] >= 'a' && s[n] <= 'z')
{
s[n] = s[n] - 32;
}
n++;
}
return (s);
}
