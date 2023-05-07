#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary to decimal
 * @b: the pointer to the string
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int count = 0;
	const char *dup;

	if (b == NULL)
		return (0);
	dup = b;
	while (*dup != '\0')
	{
		if (*dup != '0' && *dup != '1')
			return (0);
		count++;
		dup++;
	}
	count -= 1;
	while (*b != '\0')
	{
		if (*b == '1')
			decimal += power(count);
		count--;
		b++;
	}
	return (decimal);
}
/**
 * power - return two to the power of a specified int
 * @n: the power to which we are returning
 *
 * Return: the (int) value of 2 power n
 */
int power(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	return (2 * power(n - 1));
}
