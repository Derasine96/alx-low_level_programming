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
	size_t count = 0;
	const listint_t *current, *nextNode;

	current = nextNode = head;

	while (current && nextNode && nextNode->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		nextNode = nextNode->next->next;

		if (current == nextNode)
		{
			exit(98);
		}

		count++;
	}
	return (count);
}
