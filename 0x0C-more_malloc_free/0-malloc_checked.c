#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size of memory to be created
 * Return: pointer to the memory space created
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
