#include "main.h"

/**
 * get_endianness - Determine the endianess of a machine
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *character;
	int number, hold;

	number = 1;

	character = (char *)&number;

	hold = character[0];

	if (hold == 1)
		return (0);
	else
		return (1);
}
