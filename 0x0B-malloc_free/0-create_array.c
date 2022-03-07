#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char to print
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int n;

if (size == 0)
return (NULL);
if (size != 0)
{
ar = (char *)malloc(size * sizeof(char));
if (ar != NULL)
{
for (n = 0; n < size; n++)
ar[n] = c;
n++;
}
}
return (ar);
}
