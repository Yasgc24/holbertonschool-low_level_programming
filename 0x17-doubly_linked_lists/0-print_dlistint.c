#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nds = 0;

	while (h != NULL)
	{
		nds++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (nds);
}
