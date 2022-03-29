#include "lists.h"

void print_executed(void) __attribute__ ((constructor));

/**
 * print_executed - prints before the
 * main function is executed
 *
 * Return: void
 */

void print_executed(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
