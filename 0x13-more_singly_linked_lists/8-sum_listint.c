#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: pointer to first node
 * Return: sum of all data in node
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
