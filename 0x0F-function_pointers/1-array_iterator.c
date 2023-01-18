#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on
 * each element of an array also given as a parameter
 * @array: the array to iterate over
 * @size: the number of elements in hte array
 * @action: the function to apply to each element of array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
