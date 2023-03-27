#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the address of the string
 * Description: prints every odd character
 * Return: void
 */
void puts2(char *str)
{
	int count;

	count = 1;
	while(*str != '\0')
	{
		if (count % 2 == 1)
			_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}
