#include <stdio.h>
/**
 * * main - A program that prints possible combinations of two two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
			putchar('0' + a);
			putchar('0' + b);
		if (a == 98 && b == 99)
		continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
