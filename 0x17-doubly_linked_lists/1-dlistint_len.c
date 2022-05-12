#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: head of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nds = 0;

	while (h != NULL)
	{
		nds++;
		h = (*h).next;
	}
	return (nds);
}
