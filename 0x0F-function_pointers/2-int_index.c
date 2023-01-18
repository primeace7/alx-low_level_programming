#include "function_pointers.h"

/**
 * int_index - search for an integer in an input array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to the function that will do the searching
 * Return: the index of the first element in array that matches the
 * required number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
