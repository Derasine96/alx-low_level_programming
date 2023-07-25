#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: characters to be passed
 * Return: Void
 */
void rev_string(char *s)
{
	int i, left, right, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	left = 0;
	right = i - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
