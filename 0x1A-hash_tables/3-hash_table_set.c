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
	unsigned long index;
	hash_node_t *node;

	if (key == NULL || *key == '\0')
		return (0);
	index = hash_function(key);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return 0;
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[index] != NULL)
		node->next = ht->array[index];
	else
		node->next = NULL;
	ht->array[index] = node;
	return 1;
}
