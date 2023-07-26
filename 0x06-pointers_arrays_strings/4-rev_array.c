#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array.
 * @a: integer to be pointed
 * @n: number of element to be checked
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
