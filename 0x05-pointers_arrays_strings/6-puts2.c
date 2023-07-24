#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: string to be checked
 * Return: Void
 */
void puts2(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h += 2;
	}
	_putchar('\n');
}
