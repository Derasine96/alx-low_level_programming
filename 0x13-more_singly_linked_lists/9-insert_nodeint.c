#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first address
 * @idx: index of the list where the new node should be added
 * @n: new data to be added to new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
