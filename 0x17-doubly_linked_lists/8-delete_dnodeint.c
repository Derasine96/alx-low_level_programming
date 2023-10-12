#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given pos.
 * @head: pointer to a pointer to the first node
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	current = *head;
	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->next)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}

