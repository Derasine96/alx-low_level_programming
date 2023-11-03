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
    unsigned long int index;
    hash_node_t *node, *current_head;
    
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);
    index = hash_djb2((const unsigned char *)key) % ht->size;
    node = malloc(sizeof(hash_node_t));
    if (node == NULL) {
        return (0);
    }
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (0);
    }
    if (ht->array[index] != NULL)
    {
        current_head = ht->array[index];
        node->next = current_head; 
    }
    ht->array[index] = node;
    return (1);
}
