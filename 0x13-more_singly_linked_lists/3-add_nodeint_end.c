#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: int
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *s;

new_node = malloc(sizeof(listint_t));
if (new_node ==NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;

else
{
s = *head;
{
while (s-> next != NULL)
s = s->next;
s->next = new_node;
}
}
return (*head);
}
