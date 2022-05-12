#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
}

