#include "main.h"
/**
 * string_toupper - a function that changes lowercase letters to uppercase.
 * @b: a character to be checked
 * Return: Character
 */
char *string_toupper(char *b)
{
	char *upper = b;

	while (*b != 0)
	{
		if (*b >= 'a' && *b <= 'z')
		{
			*b = *b - ('a' - 'A');
		}
	b++;
	}
	return (upper);
}
