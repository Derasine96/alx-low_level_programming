#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of arguments
* Return: Integer
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
