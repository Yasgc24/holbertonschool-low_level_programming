#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list
 * @n: int
 * Return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *ins = *head;
unsigned int node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = ins;
*head = new_node;
return (new_node);
}
node = 0;
while (node < (idx - 1))
{
node++;
if (ins == NULL || ins->next == NULL)
return (NULL);
ins = ins->next;
}
new_node->next = ins->next;
ins->next = new_node;
return (new_node);
}
