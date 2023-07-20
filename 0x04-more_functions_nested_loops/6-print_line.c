#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: integer to be checked
 * Return: Straight line
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
