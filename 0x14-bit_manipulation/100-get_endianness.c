#include "main.h"

/**
 * get_endianness - checks the endiannes of a system
 *
 * Return: 0 if big endian 1 if little
 */
int get_endianness(void)
{
	int test = 2;

	if (test & 1)
		return (0);
	else
		return (1);
}
