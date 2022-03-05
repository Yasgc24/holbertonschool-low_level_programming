#include "main.h"

/**
 * *_strcpy - Copies the string
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int n = 0;
int i = 0;

while (*(src + n) != '\0')
{
n++;
}
for ( ; i < n; i++)
{
dest[i] = src[i];
}
dest[n] = '\0';
return (dest);
}
