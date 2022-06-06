#include "hash_tables.h"

/**
 * hash_table_get - function that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * Return: the value associated with
 * the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (ht == NULL)
		return (NULL);

	{
		index = key_index((const unsigned char *)key, ht->size);

		if (ht->array[index])
		{
			node = ht->array[index];
			if (node)
			{
				if (strcmp(node->key, (char *)key) == 0)
					return (node->value);
				node = node->next;
			}
		}
	}
	return (NULL);
}
