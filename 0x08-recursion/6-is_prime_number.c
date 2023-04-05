#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 0 if not prime; 1 if prime
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_modulo(n, 2));
}

/**
 * check_modulo - checks all numbers leading up to the number for divisors of n
 * @n: the number to be checked
 * @count: the self-incrementing counter
 *
 * Return: 0 if there is none, 1 if there is one
 */
int check_modulo(int n, int count)
{
	if (n == count)
		return (1);
	if (n % count != 0)
	{
		return (check_modulo(n, count + 1));
	}
	else
		return (0);
}
