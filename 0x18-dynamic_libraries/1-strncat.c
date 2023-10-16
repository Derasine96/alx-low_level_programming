#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: string to be checked
 * @src: string to be checked
 * @n: number to be passed
 * Return: Pointer to be passed
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (concat);
}
