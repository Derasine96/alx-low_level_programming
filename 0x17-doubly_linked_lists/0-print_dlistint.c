#include "lists.h"
/**
 * print_dlistint - a function that prints all the ele. of a list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%u\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
