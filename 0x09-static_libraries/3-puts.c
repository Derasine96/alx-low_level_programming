#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: string to be checked
 * Return: 0
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
