#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string
 * @s2: strin
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = j = 0;
while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

s3 = malloc(sizeof(char) * (i + j + 1));
if (s3 == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
s3[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
s3[i] = s2[j];
i++, j++;
}
s3[i] = '\0';
return (s3);
}
