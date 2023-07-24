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
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
		h++;
	}
	_putchar('\n');
}
