#include "lists.h"
/**
 * dlistint_len - a function that prints all the ele. of a list.
 * @h: head  pointer to the first node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		len += 1;
		temp = temp->next;
	}
	return (len);
}
