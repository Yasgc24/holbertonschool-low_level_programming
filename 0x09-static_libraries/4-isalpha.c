#include "main.h"

/**
* _isalpha - checks for lowercase and uppercase
* @c: character
* Return: 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
