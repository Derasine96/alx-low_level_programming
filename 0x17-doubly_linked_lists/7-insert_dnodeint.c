#include "lists.h"
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: pointer to a pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data to new node
 * Return: the address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp, *prev = NULL;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0) {
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		new->prev = prev;
		new->next = temp;
		if (temp)
			temp->prev = new;
		prev->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}

