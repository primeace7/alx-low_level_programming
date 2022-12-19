#include "main.h"

/**
* swap_int - swap the value of two integers
* @a: the first integer to swap
* @b: the second integer to swap
* Return: Nothing(void)
*/

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
