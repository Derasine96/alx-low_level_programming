#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tab;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		tab->array[i] = NULL;
	return (tab);
}
