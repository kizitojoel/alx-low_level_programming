#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end
 * @head: the pointer to the current head of the list
 * @str: the string to be stored in the node
 *
 * Return: the address of the current list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (head == NULL || str == NULL)
		return (0);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->len = _strlen(str);
	temp->str = strdup(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = temp;
	return (new);
}
/**
 * _strlen - returns thelengthof a string
 * @s: the string
 *
 * Return: the count of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
