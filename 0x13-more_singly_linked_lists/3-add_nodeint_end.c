#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of alist
 * @head: the pointer to the headerof the list
 * @n: the number to add
 *
 * Return: the pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *mover;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		mover = *head;
		while (mover->next != NULL)
		{
			mover = mover->next;
		}
		mover->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
