#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 *
 * Return: Valeus of times table
 */
void times_table(void)
{
	int f, g, h;

	for (f = 0; f <= 9; f++)
	{
		_putchar('0');
		for (g = 1; g <= 9; g++)
		{
			_putchar(',');
			_putchar(' ');
			h = f * g;

		if (h <= 9)
			_putchar(' ');
		else
			_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
