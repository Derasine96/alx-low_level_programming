#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc,__attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
