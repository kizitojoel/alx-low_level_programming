#include <stdio.h>

/**
 * main - This is the main program function
 *
 * Description: Prints the alphabet in lowercase
 * Return: Returns 0 if exiting properly
 */
int main(void)
{
	int c;
	for (c = 97; c <= 122; c++)
		putchar(c);
	putchar(10);
	return (0);
}
