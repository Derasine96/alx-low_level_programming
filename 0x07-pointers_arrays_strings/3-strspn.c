#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The string containing the characters to be matched
 * Return: The number of bytes in `s` that consist of characters in `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (length);
}

