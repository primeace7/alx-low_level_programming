#include "search_algos.h"

/**
 * linear_search - a function that performs linear search on an array of ints
 * @array: pointer to the array to search
 * @size: number of elements in the array
 * @value: the value to search for in @array
 * Return: the index of @value if found in @array, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);
	for (count = 1; count <= size; count++, array++)
	{
		printf("Value checked array[%ld] = [%d]\n", count - 1, *array);

		if (value == *array)
			return (count - 1);
	}
	return (-1);
}
