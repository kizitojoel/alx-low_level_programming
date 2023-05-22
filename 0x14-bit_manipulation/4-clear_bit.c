#include "main.h"

/**
 * clear_bit - sets the bit at index to 0
 * @n: the pointer to the integer
 * @index: the index to set to zero
 * Return: 1 if successful and -1 if erroneous
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	index = ~(1 << index);
	*n = *n & index;
	return (1);
}
