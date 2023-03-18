#include <stdio.h>

/**
 * main - main program functin
 *
 * Description: Prints alphabet excluding q and e
 * Return: returns 0 if successful
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			continue;
		}
		putchar(c);
	}
	putchar(10);
	return (0);
}

