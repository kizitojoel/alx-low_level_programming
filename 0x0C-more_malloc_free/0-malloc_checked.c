#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - reterns a void pointer
 * @b: number of bytes to check
 *
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
