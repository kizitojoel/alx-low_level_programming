#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the test number
 * Description: uses modulo and abs
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = -r;
	}
	_putchar(r + '0');
	return (r);
}

