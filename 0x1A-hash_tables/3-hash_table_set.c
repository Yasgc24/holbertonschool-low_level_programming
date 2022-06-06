#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node, *current;
    unsigned long int index;

    if (!ht || !key || *key == '\0' || !value)
    {
        return (0);
    }

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index])
    {
        current = ht->array[index];
        while (current != NULL)
        {
            if (strcmp(current->key, (char *)key) == 0)
            {
                free(current->value);
                return (1);
            }
            current = current->next;
        }
        
    }
    node = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (!node)
    {
        return (0);
    }
    node->key = strdup(key);
    if (!node->key)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (!node->value)
    {
        free(node->key);
        free(node);
        return (0);
    }
    node->next = ht->array[index];
    ht->array[index] = node;
    return (1);
}
