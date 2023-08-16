#include "function_pointers.h"
/**
 * array_iterator - a function that a executes a function
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size; i++)
		action(array[i]);
}
