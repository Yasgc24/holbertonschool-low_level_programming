#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head
 * @index: index of node
 * Return: the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node = 0;

while (node < index)
{
node++;
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
