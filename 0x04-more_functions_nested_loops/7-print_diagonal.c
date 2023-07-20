#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: integer to be checked
 * Return: Void
 */
void print_diagonal(int n)
{
	int d, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (d = 0; d < n; d++)
	{
		for (k = 0; k < d; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
