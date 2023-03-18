#include <stdio.h>

/**
 * main - main program function
 *
 * Description: Prints lowercase alphabet in reverse order
 * Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar(10);
	return (0);
}

