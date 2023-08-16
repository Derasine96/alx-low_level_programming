#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: string to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
		f(name);
}
