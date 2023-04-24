#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints the numbers separated by commas
 * @separator: the separator that will be used to print the numbers
 * @n: the number of integers passed to the functions
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
