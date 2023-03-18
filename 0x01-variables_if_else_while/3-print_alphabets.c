#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints alphabets
 * Return: returns zero if successful
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar(10);

	return (0);
}

