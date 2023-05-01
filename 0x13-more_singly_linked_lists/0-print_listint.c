#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints a linked ist of integers
 * @h: the header of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
