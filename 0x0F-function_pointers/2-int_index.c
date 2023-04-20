#include <stdlib.h>

/**
 * int_index - returs an integer by searching for an integer
 * @array: array to search
 * @size: the size of the array
 * @cmp: the function that searches for the int
 *
 * Return: index of the first element that doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
