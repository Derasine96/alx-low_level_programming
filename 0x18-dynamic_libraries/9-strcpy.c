#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: string to copy a string
 * @src: string to be copied from
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
