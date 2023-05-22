#include "main.h"

/**
 * get_bit - get the bit at a certain index
 * @index: the index to find the bit
 * @n: the number to search
 * Return: the value or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 > index)
	{
		return (-1);
	}
	return ((n & (1 << index)) ? 1 : 0);
}
