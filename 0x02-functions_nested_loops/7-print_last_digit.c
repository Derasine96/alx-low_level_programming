#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: an int to be checked
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
