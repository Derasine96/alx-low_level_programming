#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: character o be checked
 * Return: Character
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == '\t' ||
				s[i] == ',' || s[i] == ';' || s[i] == '(' || s[i]
				== ')' || s[i] == '{' || s[i] == '}' || s[i] == '?'
				|| s[i] == '"' || s[i] == '!')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		else if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
