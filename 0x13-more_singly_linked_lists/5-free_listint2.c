#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: the pointer to the head pointer of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *clear;

	while (*head)
	{
		clear = (*head)->next;
		free(*head);
		*head = clear;
	}
	*head = NULL;
}
