#include <stdio.h>
/**
 * * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;
	unsigned int w;

	for (w = 0; w < 10; w++)
		putchar('0' + w);
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
