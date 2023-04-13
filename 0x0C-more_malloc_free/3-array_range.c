#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns a pointer to an array
 * @min: the minimum
 * @max: the maximum
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max + 1 - min));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
