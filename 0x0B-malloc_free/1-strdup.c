#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns the pointer to a duplicate of the string argument
 * @ str: the string to be copied
 *
 * Return: the pointer to the duplicate
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *counter = str;
	char *dup;

	while (*counter != '\0')
	{
		i++;
		counter++;
	}
	dup = malloc(sizeof(char) * (i + 1));
	for (j = 0; j <= i; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
