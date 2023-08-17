#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		char *strg = va_arg(str, char *);

		if (strg != NULL)
			printf("%s", strg);
		else
			printf("nil");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
