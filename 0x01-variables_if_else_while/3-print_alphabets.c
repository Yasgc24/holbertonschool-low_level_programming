#include <stdio.h>
/*
*main - Alphabet
*Retur: 0
*/
int main(void)
{
char alp;
char alpH;
for (alp = 'a'; alp <= 'z'; alp++)
putchar(alp);
for (alpH = 'A'; alpH <= 'Z'; alpH++)
putchar(alpH);
putchar('\n');
return (0);
}
