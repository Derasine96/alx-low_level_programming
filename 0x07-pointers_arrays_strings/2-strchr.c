#include "main.h"
/**
 *  * _strchr - a function that locates a character in a string.
 *   * @s: charcter to be checked
 *    * @c: character to be checked
 *     * Return: Pointer to character
 *      */
char *_strchr(char *s, char c)
{
	unsigned int i, count = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0; i <= count; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
