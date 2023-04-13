#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of s2 characters to concatenate
 *
 * Return: the pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr1;
	char *str;
	unsigned int i = 0;
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	else
	{
		ptr1 = s1;
		while (*(ptr1++) != '\0')
			count1++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		ptr1 = s2;
		while (*(ptr1++) != '\0')
			count2++;
	}
	ptr1 = s2;
	str = malloc(sizeof(char) * (count1 + n + 1));
	if (str == NULL)
		exit(98);
	ptr1 = s1;
	for (i = 0; i < count1; i++)
		str[i] = s1[i];
	ptr1 = s2;
	for (i = count1; i < (count1 + n); i++)
		str[i] = s2[i - count1];
	str[count1 + n] = '\0';
	return (str);
}
