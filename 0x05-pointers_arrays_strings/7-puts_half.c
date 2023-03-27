#include "main.h"

/**
 * puts_half - print half
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count;
	int i;

	count = 0;
	while(str[count] != '\0')
		count++;
	if (count % 2 == 1)
		count++;
	for (i = count / 2; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
