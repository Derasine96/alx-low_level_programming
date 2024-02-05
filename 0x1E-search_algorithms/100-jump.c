#include "search_algos.h"
/**
 * jump_search - searches for a value in arr of int using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, block, j;

	if (array == NULL)
		return (-1);
	block = sqrt(size);
	end = 0;
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += block;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (j = start; j < size && j <= end; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
