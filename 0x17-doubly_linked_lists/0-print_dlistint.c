#include "lists.h"
/**
 * print_dlistint - a function that prints all the ele. of a list.
 * @h: head  pointer to the first node
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
}
