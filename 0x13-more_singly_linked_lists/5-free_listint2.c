#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to first nod
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
