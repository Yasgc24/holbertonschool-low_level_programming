#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node a
 * index index of a dlistint_t linked list
 * @head: pointer to pointer to head
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tempdel = *head;

	if (*head == NULL)
		return (-1);

	while (tempdel && x < index)
	{
		x++;
		tempdel = tempdel->next;
	}

	if (tempdel == NULL)
		return (-1);

	if (*head == tempdel)
		*head = tempdel->next;
	if (tempdel->next)
		tempdel->next->prev = tempdel->prev;
	if (tempdel->prev)
		tempdel->prev->next = tempdel->next;

	free(tempdel);
	return (1);
}
