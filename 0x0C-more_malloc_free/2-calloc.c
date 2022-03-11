#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: int
* @size: int
* Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int m;
char *ar;

if (nmemb == 0 || size == 0)
return (NULL);
ar = malloc(nmemb * size);
if (ar == NULL)
return (NULL);
for (m = 0; m < nmemb * size; m++)
*(ar + m) = 0;
return ((void *)ar);
}
