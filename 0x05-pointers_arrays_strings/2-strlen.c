#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: Always 0.
 */

int _strlen(char *s)
{
int n = 0;

while (*s++)
{
n++;
}
return (n);
}
