#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: A pointer or NULL
 */

char *_strdup(char *str)
{
char *string;
unsigned int n;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
break;
string = (char *)malloc(i + 1 * sizeof(char));
if (string != NULL)
{
for (n = 0; str[n] != '\0'; n++)
string[n] = str[n];
}
else
{
return (NULL);
}
string[n] = '\0';
return (string);
}
