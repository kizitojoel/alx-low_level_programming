#include "main.h"

/**
 * main - main loop
 *
 * Description: prints last digit
 * Return: Always 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(75);
	r = print_last_digit(98230);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

