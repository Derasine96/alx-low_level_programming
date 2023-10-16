#include <stdio.h>
/**
 * add - function to add two numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int add(int a, int b)
{
	return a + b;
}

/**
 * add - function to subtract two numbers
 * @a: first number
 * @b: second number
 * Return: sub
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * add - function to multiply two numbers
 * @a: first number
 * @b: second number
 * Return: mul.
 */
int mul(int a, int b)
{
	return a * b;
}

/**
 * add - function to divide two numbers
 * @a: first number
 * @b: second number
 * Return: div
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return 0;
	}
	return a / b;
}

/**
 * add - function to get the modulus two numbers
 * @a: first number
 * @b: second number
 * Return: mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return 0;
	}
	return a % b;
}
