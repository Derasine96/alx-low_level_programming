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

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
		newNode->next = *head;
	}
	else
		newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
