#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: integer to be checked
 * Return: Void
 */
void print_triangle(int size)
{
	int h, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 1; h <= size; h++)
	{
		for (k = 1; k <= size - h; k++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= h; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
