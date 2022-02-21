#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: char
 * Return: Always 0.
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
