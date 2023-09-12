#include "search_algos.h"

/**
 * binary_search - perform a binary search on an array of ints
 * @array: pointer to the array to search
 * @size: number of elements in @array
 * @value: the value to search for in @array
 * Return: the index of @value in @array if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, midpoint;

	index = 0;
	if (array == NULL || size == 0)
		return (-1);
	if (size == 1)
	{
		print_array(array, size);
		if (array[0] == value)
			return (0);
		else
			return (-1); }

	while (size > 1)
	{
		print_array(array, size);
		midpoint = (size % 2 == 0) ? (size / 2 - 1) : (size / 2);

		if (array[midpoint] == value)
		{
			index += midpoint;
			return (index); }
		else if (value < array[midpoint])
			size -= (size % 2 == 0) ? (size / 2 + 1) : (size / 2);
		else
		{
			size = size / 2;
			index += (midpoint + 1);
			array += (midpoint + 1); }
	}
	if (array[0] == value)
		return (index);
	print_array(array, size);
	return (-1);
}

/**
 * print_array - print a 1d array of ints
 * @array: pointer to the array to print
 * @size: number of elements in the array to print
 * Return; nothing (void)
 */

void print_array(int *array, size_t size)
{
	size_t i;

	if (size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
