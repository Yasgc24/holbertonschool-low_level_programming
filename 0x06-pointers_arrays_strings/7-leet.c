#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: array
 * Return: s
 */

char *leet(char *s)
{
int n = 0;
int i;
char a[11] = "aAeEoOtTlL";
char b[11] = "4433007711";

while (s[n] != '\0')
{
i = 0;
while (a[i] != '\0')
{
if (s[n] == a[i])
{
s[n] = b[i];
}
i++;
}
n++;
}
return (s);
}
