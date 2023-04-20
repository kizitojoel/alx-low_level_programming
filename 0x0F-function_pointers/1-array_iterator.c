#include <stdlib.h>
/**
 * array_iterator - performs an action over an array
 * @array: pointer to the array
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
