#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: size to be checked
 * Return: Void
 */
void print_square(int size)
{
	int s, q;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (s = 0; s < size; s++)
	{
		for (q = 0; q < size; q++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
