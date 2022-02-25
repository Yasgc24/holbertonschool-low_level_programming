#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: array
 * Return: s
 */

char *rot13(char *s)
{
int n = 0;
int i;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[n] != '\0')
{
i = 0;
while (a[i] != '\0')
{
if (s[n] == a[i])
{
s[n] = b[i];
break;
}
i++;
}
n++;
}
return (s);
}

