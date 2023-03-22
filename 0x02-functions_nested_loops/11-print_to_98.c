#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main function
 * @n: the starting integer
 * Description: prints the numbers up to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	int start;

	if (n <= 98)
	{
		for (start = n; start <= 98; start++)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

