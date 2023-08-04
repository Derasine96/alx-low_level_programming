#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: he pointer to copy a string
 * @src: the pointer to be copied from
 * @n: number of bytes to be worked with
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *dptr = (unsigned char *)dest;
	unsigned char *sptr = (unsigned char *)src;

	for (i = 0; i < n; i++)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
	}
	return (dest);
}
