#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first node
 * @n: data to add to new node
 * Return: address of the new element,
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;
	return (*head);
}
