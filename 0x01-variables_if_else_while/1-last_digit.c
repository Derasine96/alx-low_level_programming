#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lstdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdigit = n % 10;
	if (lstdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdigit);
	}
	if (lstdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdigit);
	}
	if (lstdigit < 6 && lstdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdigit);
	}
	return (0);
}

