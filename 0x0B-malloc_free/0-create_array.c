#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and populates it with H
 * @size: the size of the array
 * @c: the letter to populate it with
 *
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
