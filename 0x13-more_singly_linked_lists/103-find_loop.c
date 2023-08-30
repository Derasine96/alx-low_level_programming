#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;
	listint_t *ptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp = head;
	ptr = head;

	do {
		temp = temp->next;
		ptr = ptr->next;
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	} while (temp != ptr);

	temp = head;
	while (temp != ptr)
	{
		temp = temp->next;
		ptr = ptr->next;
	}
	return (temp);
}
