#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: the address of the number to alter
 * @index: the index that we want to set to 1
 * Return: 1 if successful, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	index = 1 << index;
	*n = *n | index;
	return (1);
}
