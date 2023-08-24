#include "lists.h"
/**
 * list_len - a function that returns the no. of elements in a linked list
 * @h: lists of list_t
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
			length = length + 1;
			h = h->next;
	}
	return (length);
}
