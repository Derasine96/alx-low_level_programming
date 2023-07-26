#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array.
 * @a: integer to be pointed
 * @n: number of element to be checked
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; n >= 0; i--)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
	}
}
