#include "main.h"
/**
 * _puts - output a string
 * @str: the pointer
 * Description: checks for null
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*(str) != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
