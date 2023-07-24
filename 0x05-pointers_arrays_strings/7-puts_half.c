#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: a string to be checked
 * Return: Void
 */
void puts_half(char *str)
{
	int half;
	int length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	half = (length_of_the_string + 1) / 2;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
