#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function
 * @h: the pointer to the header of the linked list
 *
 * Description: traverses the list in forward direction
 * Return: the size of the linkedi list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
