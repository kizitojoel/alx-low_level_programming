#include "main.h"

/**
 * _sqrt_recursion - searches for a squareroot recursively
 * @n: the number we're searching for a natural squareroot to
 *
 * Return: the natural square root or -1 if it does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (_sqrt(n, 1));	
}

/**
 * _sqrt - does the actual searching
 * @n: the initial number
 * @count: the counter
 *
 * Return: the same things as _sqrt_recursion
 */
int _sqrt(int n, int count)
{
	if (count * count == n)
	{
		return (count);
	}
	if (count * count > n)
	{
		return (-1);
	}
	return (_sqrt(n, count + 1));
}
