#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
if ((*h).str == NULL)
printf("[0] (nil)\n");
else
printf("[%i] %s\n", (*h).len, (*h).str);
h = (*h).next;
}
return (count);
}
