#include <stdio.h>

/**
 * main - prints fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned long fib1 = 1, fib2 = 2, j1, j2, k1, k2;

	printf("%lu", fib1);
	while (i < 91)
	{
		printf(", %lu", fib2);

		fib2 += fib1;
		fib1 = fib2 - fib1;
		i++;
	}
	j1 = fib1 / 1000000000;
	j2 = fib1 % 1000000000;
	k1 = fib2 / 1000000000;
	k2 = fib2 % 1000000000;
	for (i = 92; i <= 98; i++)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 += j1;
		j1 = k1 - j1;
		k2 += j2;
		j2 = k2 - j2;
	}

	printf("\n");
	return (0);
}
