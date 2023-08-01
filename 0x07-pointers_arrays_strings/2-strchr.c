#include "main.h"
/**
 *  * _strchr - a function that locates a character in a string.
 *   * @s: charcter to be checked
 *    * @c: character to be checked
 *     * Return: Pointer to character
 *      */
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
	unsigned int i, count = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0; i <= count; i++)
=======

	while (*s != '\0')
>>>>>>> 488c1050778fe151751824e6814edab0a21c8ed8
	{
		if (*s == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
