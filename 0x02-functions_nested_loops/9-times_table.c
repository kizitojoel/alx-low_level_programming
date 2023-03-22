#include "main.h"

/**
 * times_table - prints the times table up to 10
 *
 * Description: Uses two nested for loops
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j > 0)
			{
				_putchar(44);
				if (product >= 10)
				{
					_putchar(32);
					_putchar((product / 10) + '0');
				}
				else if (product < 10)
				{
					_putchar(32);
					_putchar(32);
				}
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

