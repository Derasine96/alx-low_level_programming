#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: pointer to the first node
 * @n: data
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (*head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
