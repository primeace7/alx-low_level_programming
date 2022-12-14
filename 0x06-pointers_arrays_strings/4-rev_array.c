#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: the integer array to reverse
 * @n: the length of the array
 * Return: void(nothing)
 */

void reverse_array(int *a, int n)
{
	int i, hold;

	for (i = 0; i < (n / 2); i++)
	{
		hold = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = hold;
	}
}
