#include <stdlib.h>
#include "main.h"

/**
 * str_concat - returns the pointer to concatenated strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	char *concat;
	char *copy;
	int i;

	if (s1)
	{
		copy = s1;
		while (*(copy++) != '\0')
			count1++;
	}
	if (s2)
	{
		copy = s2;
		while (*(copy++) != '\0')
		{
			count2++;
		}
	}
	concat = malloc(sizeof(char) * (count1 + count2 + 1));
	if (concat == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i <= count1; i++)
		{
			concat[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = count1; i <= count1 + count2; i++)
		{
			concat[i] = s2[i - count1];
		}
	}
	concat[count1 + count2 + 1] = '\0';
	return (concat);
}
