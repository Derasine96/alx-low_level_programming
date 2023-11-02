#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Pointer to the hash table
 * @key: The key for which to compute the index.
 * @value: Value stored in the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	if (value != NULL)
		node->value = strdup(value);
	else
		node->value = NULL;
	if (node->value == NULL && value != NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}