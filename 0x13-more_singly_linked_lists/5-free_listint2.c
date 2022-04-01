#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to address
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
listint_t *vatemp;

if (head == NULL)
return;

while (*head)
{
vatemp = (*(*head)).next;
free(head);
*head = vatemp;
}
head = NULL;
}
