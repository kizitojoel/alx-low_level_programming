#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: the pointer to an int
 * @n: the number of array elements to print
 * Description: dereferecning
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
