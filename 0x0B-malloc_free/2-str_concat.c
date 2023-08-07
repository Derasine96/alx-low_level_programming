#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: character to be checked
 * @s2: character to be checked
 * Return: Pointer to be allocated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1 = 0, length2 = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
	{
		length1 = length1 + 1;
	}
	while (s2[length2] != '\0')
	{
		length2 = length2 + 1;
	}
	dest = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		dest[i] = s1[i];
	for (j = 0; j < length2; j++)
		dest[length1 + j] = s2[j];
	dest[length1 + length2] = '\0';
	return (dest);
}
