#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the mem. block
 * @b: Value you want to set in mem. block
 * @n: number of bytes you want to set
 * Return: Character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char value = (unsigned char)b;
	unsigned char *mem = (unsigned char *)s;

	for (i = 0; i < n; i++)
	{
		*mem = value;
		mem++;
	}
	return (s);
}
