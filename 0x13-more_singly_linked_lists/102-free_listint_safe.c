#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 * @h: head of the list
 * Return: unsigned integer
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *prev;
	size_t count = 0;
	int dif;

	if (*h == NULL || h == NULL)
		return (0);

	while (temp)
	{
		dif = temp - temp->next;
		if (dif > 0)
		{
			prev = temp;
			temp = temp->next;
			free(prev);
			count++;
		}
		else
		{
			free(temp);
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
