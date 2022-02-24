#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: String
 * Return: 0
 */

char *cap_string(char *s)
{
int n = 0;
int i;
char sep[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (s[n] != '\0')
{
if (n == 0 && s[n] >= 'a' && s[n] <= 'z')
{
s[n] = s[n] - 32;
}
i = 0;
while (sep[i] != '\0')
{
if (sep[i] == s[n] && (s[n + 1] >= 'a' && s[n + 1] <= 'z'))
{
s[n + 1] = s[n + 1] - 32;
}
i++;
}
n++;
}
return (s);
}
