#include "search_algos.h"
/**
 * binarySearch - searches for an int in a sorted arr using binary search
 * @array: pointer to the first element of the array to search in
 * @start: lowest index
 * @end: highest index
 * @value: value to search for
 * Return: index of value found or -1
 */
int binarySearch(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
			else
				printf("\n");
		}
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in
 * array of integers using exponential_search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp, low, high;

	if (array == NULL || size == 0)
		return (-1);
	exp = 1;
	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	low = exp / 2;
	if (exp < size)
		high = exp;
	else
		high = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binarySearch(array, low, high, value));
}
