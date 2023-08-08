#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2-D array of integers.
 * @width: row of array
 * @height: column of array
 * Return: Integer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
/**
 * free2dpointer - function to free malloc
 * @arr: pointer to be freed
 * @width: row to be freed
 * Return: Nothing
 */
void free2dpointer(int **arr, int width)
{
	int i;

	for (i = 0; i < width; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
