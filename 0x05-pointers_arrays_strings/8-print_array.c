#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: integers to be passed
 * @n: no of elements to be checked
 * Return: Void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count < n - 1)
			printf(", ");
	}
	printf("\n");
}
