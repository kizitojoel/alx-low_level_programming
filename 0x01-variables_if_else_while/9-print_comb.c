#include <stdio.h>

/**
 * main - main function
 *
 * Description: Prints comma separated numbers
 * Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 48)
		{
			putchar(44);
			putchar(32);
		}
		putchar(c);
	}
	putchar(10);
	return (0);
}

