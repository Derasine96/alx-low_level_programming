#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: number to be checked
 * @c: character to be checked
 * Return: Pointer to c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[size] = '\0';
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
