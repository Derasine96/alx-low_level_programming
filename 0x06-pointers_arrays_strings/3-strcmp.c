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
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		else
			return (0);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-15);
	else
		return (15);
}

