#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int l;

	l = 0;
	while (string[l] != '\0')
		l++;
	return (l);
}
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: destination string
 * @s2: source
 * @n: number of bytes
 * Return: Pointer to new mem alloc.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, num, len;
	char *str;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < num; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
