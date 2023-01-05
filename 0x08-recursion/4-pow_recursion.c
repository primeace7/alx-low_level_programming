#include "main.h"

/**
 * _pow_recursion - calculate an integer raised to an integer power
 * @x: the base integer
 * @y: the exponent integer
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1));
}
