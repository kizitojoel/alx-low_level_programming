#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a node at the beginning
 * @head: the pointer to the the head pointer
 * @n: the number to be added to the node
 *
 * Return: the pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
