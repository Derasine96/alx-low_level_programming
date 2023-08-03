#include "main.h"
/**
 * length - a function to get length of string
 * @s: string to be checked
 * Return: Integer
 */
int length(char *s)
{
	if (*s != '\0')
	return (1 + length(s + 1));
}
/**
 * comp - a function to compare strings
 * @s: string to be checked
 * @a: start of string
 * @z: end of string
 * Return: integer
 */
int comp(char *s, int a, int z)
{
	if (s[a] != s[z])
		return (0);
	comp(s, a + 1, z - 1);
	return (1);
}
/**
 * is_palindrome - a function that returns a string is a palindrome
 * @s: character to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (comp(s, 0, length(s) - 1));
}
