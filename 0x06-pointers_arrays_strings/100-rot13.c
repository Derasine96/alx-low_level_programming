#include "main.h"
/**
 * */
char *rot13(char *rot)
{
	int a = 0;
	char s[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char t[] = "MLKJIHGFEDCBAmlkjihgfedcbaZYXWVUTSRQPONzyxwvutsrqpon";
	int d;
	int length = 51;
	while (rot[a]!= '\0')
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
