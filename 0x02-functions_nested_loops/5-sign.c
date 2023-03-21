#include "main.h"

/**
 * print_sign - prints sign
 * @n: the test number
 * Description: Prints the sign of number
 * Return: returns 1 if greater than 0, 0 if it is zero, and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

