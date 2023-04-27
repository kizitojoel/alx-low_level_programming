#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning
 * @head: the pointer to the pointer to the head
 * @str: the string that needs to be copied to the node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	if (*head != NULL)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (new);
}

/**
 * _strlen - counts the length of character of a string
 * @s: the string pointer
 * Return: the number of characters in a string
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
