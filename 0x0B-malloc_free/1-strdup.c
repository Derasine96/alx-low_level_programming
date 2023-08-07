#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a ptr  to a newly alloc. space in memory.
 * @str: string to be duplicated
 * Return: Pointer to newly alloc. mem
 */
char *_strdup(char *str)
{
	int i, length = 0;
	char *str2;

	if (str == NULL)
                return (NULL);
	while (str[length] != '\0')
		length = length + 1;
	str2 = (char *)malloc((length + 1) * sizeof(char));
	if (str2 == NULL)
                return (NULL);
	for (i = 0; i < length; i++)
	{
		str2[i] = str[i];
	}
	str2[length] = '\0';
	return (str2);
}
