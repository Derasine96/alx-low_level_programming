#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to first node
 * @index: index of the node, starting at 0
 * Return: Null or otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);
	else
		return (NULL);
}
