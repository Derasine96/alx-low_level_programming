#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: destination string
 * @s2: source
 * @n: number of bytes
 * Return: Pointer to new mem alloc.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		len1 += 1;
	}
	while (*s2 != '\0')
	{
		len2 += 1;
	}
	if (n > len2)
		n = len2;
	str = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + n] = '\0';
	return (str);
}
