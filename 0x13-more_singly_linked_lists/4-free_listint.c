#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *vatemp;

while (head != NULL)
{
vatemp = head;
head = head->next;
free(vatemp);
}
}
