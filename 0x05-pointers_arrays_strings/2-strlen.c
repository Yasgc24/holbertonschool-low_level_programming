#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: Always 0.
 */

int _strlen(char *s)
{
int n;

for (n = 0; s[n] != '\0'; n++)
{
n++;
}
return (n);
}
