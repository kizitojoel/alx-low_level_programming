#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops the first data node and returns the value
 * @head: the pointer to the head pointer
 *
 * Return: the value
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *pop;

	if (head == NULL)
		return (0);
	if (*head == NULL)
	{
		return (0);
	}
	pop = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = pop;
	return (num);
}
