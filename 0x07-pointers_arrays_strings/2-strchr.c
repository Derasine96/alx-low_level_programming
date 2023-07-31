#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: charcter to be checked
 * @c: character to be checked
 * Return: Pointer to character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		s++;
	}
	return (NULL);
}
