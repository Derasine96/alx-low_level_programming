#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be passed
 * Return: Void
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != 0)
	{
		r++;
	}
	r--;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
