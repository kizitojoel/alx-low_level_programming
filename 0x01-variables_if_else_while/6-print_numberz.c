#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints numbers using putchar
 * Return: returns zero
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar(10);
	return (0);
}

