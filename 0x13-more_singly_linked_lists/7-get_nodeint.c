#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get the node at the index
 * @head: the head of the int
 * @index: the index at which we want to get the node
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	while (index > 0)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		index--;
	}
	return (node);
}
