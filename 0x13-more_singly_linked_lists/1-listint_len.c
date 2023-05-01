#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - counts thenumber of lements in a linked list
 * @h: the header of a linkedlist
 *
 * Return: thenumber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
