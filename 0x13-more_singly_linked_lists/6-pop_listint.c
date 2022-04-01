#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head of list
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
listint_t *vatemp;
int i;

if (*head == NULL)
return (0);

vatemp = *head;
i = (*head)->n;
*head = (*head)->next;
free(vatemp);
return (i);
}
