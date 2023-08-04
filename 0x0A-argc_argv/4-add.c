#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers..
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	if (argc == 1)
		printf("0");
	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			sum += num;
		}
		printf("%d", sum);
	}
	printf("\n");
	return (0);
}
