#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1:string to be checked
 * @s2: string to be checked
 * Return: 0 positive or negative
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
