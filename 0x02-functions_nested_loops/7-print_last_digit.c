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

	_putchar(lastdigit);
	return (lastdigit);
}
