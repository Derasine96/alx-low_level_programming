#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a: row side of an array
 * @size: col. side of an array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, sumDd = 0, sumDu = 0;

	for (i = 0; i < size; i++)
	{
		sumDd += a[i * size + i];
		sumDu += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sumDd, sumDu);
}
