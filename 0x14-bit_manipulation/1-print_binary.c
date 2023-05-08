#include "main.h"
#include <stdlib.h>

/**
 * print_binary - converts a number to binary using bitwise ops
 * @n: the interger
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0 && n )
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
