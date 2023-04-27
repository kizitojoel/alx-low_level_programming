#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the memory allocated to a list
 * @head: the pointer to the head of a list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
