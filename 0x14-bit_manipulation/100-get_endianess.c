#include "main.h"

/**
 * Determine the endianess of a machine
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *check;
	int number;

	number = 1;

	check = (char *)&number;

	if (check == 1)
		return (0);
	else
		return (1);
}
