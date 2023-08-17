#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - a program that performs simple operations.
 * @argc: no of arguments
 * @argv: arguments passed
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2, result;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	s = *argv[2];
	if ((s == '/' || s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
