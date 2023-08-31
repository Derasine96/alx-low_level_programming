#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		char digit = *b;

		if (digit != '0' && digit != '1')
			return (0);
		result *= 2;
		result += (digit - '0');
		b++;
	}
	return (result);
}
