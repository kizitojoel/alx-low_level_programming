#include <stdio.h>

/**
 * main - main program function
 *
 * Description: prints hexadecimal characters
 * Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar(10);
	return (0);
}

