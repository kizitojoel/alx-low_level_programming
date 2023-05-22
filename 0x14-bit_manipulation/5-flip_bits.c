#include "main.h"

/**
 * flip_bits - finds the number of bits I need to flip
 * @n: the first integer
 * @m: the second integer
 *
 * Return: the total number of digits I need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_count = 0;
	unsigned long int compare = 0;

	compare = n ^ m;
	while (compare != 0)
	{
		if (compare & 1)
			flip_count++;
		compare = compare >> 1;
	}
	return (flip_count);
}
