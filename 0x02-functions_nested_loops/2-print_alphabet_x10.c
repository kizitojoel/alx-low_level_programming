#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Description: stated
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

