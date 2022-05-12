#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: diata for the node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
