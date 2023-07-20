#include <stdio.h>
/**
 * main - a program that finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int step;
	unsigned long int sum = 0;

	while (i < 4000000)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		step = i + j;
		i = j;
		j = step;
	}
	printf("%lu\n", sum);
	return (0);
}
