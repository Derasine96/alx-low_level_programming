#include <stdio.h>
/**
 * * main - A program that prints possible dif. combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
			if (a == 7 && b == 8 && c == 9)
			continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
