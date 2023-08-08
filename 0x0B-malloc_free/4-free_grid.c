#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2D array
 * @grid: a pinter to a pointer
 * @height: pointer to be freed
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
