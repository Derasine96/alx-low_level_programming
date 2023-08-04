#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a string to be checked.
 * @accept: a string to be checked
 * Return: Character
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *acceptPtr = accept;

		while (*acceptPtr != '\0')
		{
			if (*acceptPtr == *s)
			{
				return (s);
			}
			acceptPtr++;
		}
		s++;
	}
	return (NULL);
}
