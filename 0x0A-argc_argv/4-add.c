#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: size
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
int num;
int v;
int sum = 0;

for (num = 1; num < argc; num++)
{
for (v = 0; argv[num][v]; v++)
{
if (argv[num][v] < '0' || argv[num][v] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
