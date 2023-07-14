#include <stdio.h>
/**
 * * main - a program that prints possible diff. combinations of two digits
 * *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar('0' + a);
				putchar('0' + b);
		if (a == 9 && b == 9)
		continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
