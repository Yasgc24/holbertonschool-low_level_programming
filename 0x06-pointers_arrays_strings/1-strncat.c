#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: string
* @src: string
* @n: int
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int s = 0;

while (dest[i] != 0)
{
i++;
}

while (src[s] != 0 && s < n)
{
dest[i] = src[s];
i++;
s++;
}
return (dest);
}

