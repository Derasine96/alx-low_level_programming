#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node
 * Return: (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);
	current = *head;
	data = current->n;
	*head = current->next;
	free(current);
	return (data);
}
