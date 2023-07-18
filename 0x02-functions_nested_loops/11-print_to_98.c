#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers
 *
 * @n: integerto be checked
 *
 * Return: Aways 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
			_putchar((i & 10) + '0');
	}
	else
	{
		for (i = n; i < 98; i++)
			_putchar((i % 10) + '0');
	_putchar('\n');
	}
}
