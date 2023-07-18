#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers
 *
 * @n: integerto be checked
 *
 * Return: Value of n
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d ", n++);
		printf("%d\n", n);
	}
}
