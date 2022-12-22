#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an integer array
 * @n: the number of elements to print
 * @a: the integer array to print from
 * Return: nothing(void)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
