#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min int in array
 * @max: max int in array
 * Return: pointer
 */

int *array_range(int min, int max)
{
int *a;
int b, size;

if (min > max)
return (NULL);
size = (max - min) + 1;
a = malloc(sizeof(int) * size);
if (a == NULL)
return (NULL);
for (b = 0; b < size && min <= max; b++, min++)
*(a + b) = min;
return (a);
}
