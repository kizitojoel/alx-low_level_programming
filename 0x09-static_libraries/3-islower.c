#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: this is an integer argument
 * Description: checks if the integer is lowercase using ascii
 * Return: 0 if false and 1 if true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

