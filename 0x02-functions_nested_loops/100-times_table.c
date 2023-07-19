#include "main.h"
/**
 * print_times_table - a function that prints the n times table
 *
 * @n: integer value to be passed
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int a, b, r;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			if (r <= 9)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
