#include "3-calc.h"

/**
 * main - Prints the result
 * @argc: Number of arguments
 * @argv: Array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
int n1, n2, result;
int (*func)(int, int);

if (argc != 4)
printf("Error\n"), exit(98);
if (argv[2][1] != '\0')
printf("Error\n"), exit(99);

func = get_op_func(argv[2]);
if (func != NULL)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
result = (*func)(n1, n2);
printf("%d\n", result);
}
else
printf("Error\n"), exit(99);
return (0);
}

