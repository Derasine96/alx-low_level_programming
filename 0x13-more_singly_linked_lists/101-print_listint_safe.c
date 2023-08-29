#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *prev;
	size_t count = 0, i;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;
		prev = head;
		i = 0;

		while (i < count)
		{
			if (temp == prev)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			i++;
			prev = prev->next;
		}

		if (head == NULL)
			exit(98);
	}
	return (count);
}

