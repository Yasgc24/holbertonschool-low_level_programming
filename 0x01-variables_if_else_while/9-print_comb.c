#include <stdio.h>
/**
* main - Numbers one digit
* Return: 0
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
putchar(n);
if (n != '9')
putchar(',');
putchar(' ');
return (0);
}
