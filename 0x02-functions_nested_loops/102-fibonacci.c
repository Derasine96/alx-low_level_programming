#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers
 *
 * Return: 0(Success)
 */
int main(void)
{
	unsigned long int one = 1;
	unsigned long int two = 2;
	unsigned long int step;
	int i;

	printf("%lu, %lu", one, two);
	for (i = 0; i < 48; i++)
	{
		step = one + two;
		printf(", ");
		printf("%lu", step);
		one = two;
		two = step;
	}
	printf("\n");
	return (0);
}
