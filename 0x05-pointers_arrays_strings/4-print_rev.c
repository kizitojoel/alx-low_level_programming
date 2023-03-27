#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the first address of the string
 * Description: first counts
 * Return: void
 */
void print_rev(char *s)
{
	int count;
	char *spt = s;

	count = 0;
	/* count how many characters are in the string*/
	while (*(spt) != '\0')
	{
		count++;
		spt++;
	}
	count--;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
