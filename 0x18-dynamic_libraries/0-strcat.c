#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: pointer to be checked
 * @src: pointer to be checked
 * Return: Value of pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
