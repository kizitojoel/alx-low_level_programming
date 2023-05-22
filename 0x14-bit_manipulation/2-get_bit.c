#include "main.h"

/**
 * get_bit - get the bit at a certain index
 * @index: the index to find the bit
 * @n: the number to search
 * Return: the value or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof (long unsigned int)))
	{
		return (-1);
	}
	n = n >> index;
	return (n & 1 ? 1 : 0);
}
