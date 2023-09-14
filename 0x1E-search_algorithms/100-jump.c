#include "search_algos.h"

/**
 * jump_search - search for a value in an array using jump search
 * @array: pointer to the array to search
 * @size: number of elements in @array
 * @value: the value to search for in @array
 * Return: the index of @value in @array, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	double a;
	double b;
	double min_search;

	if (array == NULL || size == 0)
		return (-1);
	size = (double)size;
	value = (double)value;
	a = 0;
	b = sqrt(size);
	min_search = minimum(b, size) - 1;
	printf("Value checked array[%d] = [%d]\n", (int)a, array[(int)a]);

	while (array[(int)min_search] < value)
	{
		a = b;
		printf("Value checked array[%d] = [%d]\n", (int)a, array[(int)a]);
		b += sqrt(size);
		if (a >= size)
			return (-1);
		min_search = minimum(b, size) - 1;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);

	while (array[(int)a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[(int)a]);
		a += 1;
		if (a == minimum(b, size))
			return (-1); }

	if (array[(int)a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[(int)a]);
		return (a); }
	else
		return (-1);
}

/**
 * minimum - find the minimum of two numbers
 * @a: the first number to compare
 * @b: the second number to comapre
 * Return: minimum of @a and @b
 */

double minimum(double a, double b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
