#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *
 * @c: characet to be checked
 *
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if (c == 0 && c <= 9)
		return (1);
	else if (c == 'a' || c == 'A')
		return (0);
