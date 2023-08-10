#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: destination string
 * @s2: source
 * @n: number of bytes
 * Return: Pointer to new mem alloc.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, num, len1, len2;
	char *str;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		len1++;
	}
	while (*s2 != '\0')
	{
		len2++;
	}
	if (num >= len2)
		num = len2;
	str = (char *)malloc((len1 + num + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < num; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
