#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the nodes of a list
 * @head: the pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *clear;

	while (head)
	{
		clear = head->next;
		free(head);
		head = clear;
	}
}
