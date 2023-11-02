#include "hash_tables.h"
/**
 * key_index - Computes the index for a given key in a hash table.
 * @key: The key for which to compute the index.
 * @size: The size of the hash table.
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashCode;
	unsigned long int index;

	hashCode = hash_djb2(key);
	index = hashCode % size;
	return (index);
}
