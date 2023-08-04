#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: a string to be checked
 * @needle: a string to be checked
 * Return: A pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				return (haystack);
			}
			needle++;
		}
		haystack++;
	}
	if (needle[j] != '\0')
	return (NULL);
}
