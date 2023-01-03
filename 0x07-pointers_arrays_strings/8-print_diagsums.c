#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of any square matrix of
 * integers
 * @a: an integer pointer to the square matrix of integers
 * @size: the size of the square matrix of integers
 * Return: void (nothing)
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i - 1];
	}

	return (sum1, sum2);
}
