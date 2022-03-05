#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: string
* @src: string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
int n = 0;
int s = 0;

while (dest[n] != 0)
{
n++;
}

while (src[s] != 0)
{
dest[n] = src[s];
n++;
s++;
}
return (dest);
}
