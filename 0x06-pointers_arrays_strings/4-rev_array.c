#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int count;
	int swap;
	int i;

	if (n % 2 != 0)
		count = (n - 1) / 2;
	else
		count = n / 2;
	swap = 0;
	for (i = 0; i < count; i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}
