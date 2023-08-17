#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_format - a function that prints format
 * @c: character to be checked
 * @args: differnt arguments
 */
void print_format(char c, va_list *args)
{
	char *content;

	switch (c)
	{
		case 'c':
			printf("%c", va_arg(*args, int));
			break;
		case 'i':
			printf("%d", va_arg(*args, int));
			break;
		case 'f':
			printf("%f", va_arg(*args, double));
			break;
		case 's':
			content = va_arg(*args, char *);
			if (content == NULL)
				printf("(nil)");
			printf("%s", content);
			break;
	}
}
/**
 * print_all - a function that prints anything
 * @format: is a list of types of args. passed to the func
 */
void print_all(const char * const format, ...)
{
	int i = 0, num_args = strlen(format);
	va_list args;

	while (i < num_args)
	{
		if (format[i] == '\0')
		{
			printf("\n");
		print_format(format[i], &args);
		i++;
	}
	while (format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				printf(", ");
				break;
		}
		print_format(format[i], &args);
                i++;
	}
	printf("\n");
	va_end(args);
}

