#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: charcter to be checked
 * @c: character to be checked
 * Return: Pointer to character
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
