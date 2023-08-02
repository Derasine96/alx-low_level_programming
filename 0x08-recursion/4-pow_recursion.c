#include "main.h"
/**
 * _pow_recursion - a function that returns value of x^y
 * @x: number to be passed
 * @y: number to be passed
 * Return: Value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
