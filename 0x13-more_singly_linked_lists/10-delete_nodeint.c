#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer
 * @index: int
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *vtemp = *head;
listint_t *temp;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(vtemp);
return (1);
}
while (vtemp)
{
if (index == i + 1)
{
temp = vtemp->next;
vtemp->next = temp->next;
free(temp);
return (1);
}
vtemp = vtemp->next;
i++;
}
return (-1);
}
