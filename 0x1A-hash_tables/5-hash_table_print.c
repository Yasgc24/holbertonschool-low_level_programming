#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *flag;

	if (ht == NULL)
		return;
	printf("{");
	flag = "";

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", flag, node->key, node->value);
			flag = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
