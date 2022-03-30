#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
list_t *vatemp;

while (head != NULL)
{
vatemp = head;
head = head->next;
free(vatemp->str);
free(vatemp);
}
}
