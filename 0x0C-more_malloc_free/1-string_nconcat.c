#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = 0;
while (s1[i] != '\0')
i++;
s3 = malloc(sizeof(char) * (i + n + 1));
if (s3 == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
s3[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
s3[i] = s2[j];
i++, j++;
}
s3[i] = '\0';
return (s3);
}
