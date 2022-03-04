#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: size
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int counter;
for (counter = 0; counter < argc; counter++)
{
printf("%s\n", argv[counter]);
}
return (0);
}
