#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to first node
 * @index: position of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	prev = NULL;
	while (current != NULL && i != index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
