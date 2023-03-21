#include "main.h"

/**
 * _abs - converts to absolute value
 * @n: the input test integer
 * Description: removes any negatives
 * Return: Returns the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

