#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to head
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
