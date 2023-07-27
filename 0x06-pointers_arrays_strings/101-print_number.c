#include "main.h"
/**
 * print_number - A function that prints an integer
 * @n: an integer to be checked
 * Return: Void
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	if (j / 10)
		print_number(j / 10);
	_putchar((j % 10) + '0');
}
