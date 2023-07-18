#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Returns - 1 if character is lowercase, 0 otherwise. (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
