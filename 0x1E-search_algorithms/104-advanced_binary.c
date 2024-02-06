#include "search_algos.h"
/**
 * advanced_binary - searches for a value in arr of integer
 * using  advanced binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i;

	if (size == 0)
		return (-1);
	mid = size / 2;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary(array, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary(array + mid + 1, size - mid - 1, value));
	else
		return (advanced_binary(array, mid, value));
}
