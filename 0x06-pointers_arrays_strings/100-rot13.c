#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @rot: a string to be checked
 * Return: Character
 */
char *rot13(char *rot)
{
	int a = 0;
	char s[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char t[] = "MLKJIHGFEDCBAmlkjihgfedcbaZYXWVUTSRQPONzyxwvutsrqpon";
	int d;
	int length = 51;

	while (rot[a] != '\0')
	{
		for (d = 0; s[d] != '\0'; d++)
		{
			if (rot[a] == s[d])
			{
				rot[a] = t[length - d];
				break;
			}
		}
		a++;
	}
	return (rot);
}
