#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: the destination string
 * @src: the source string
 * Description: adds characters to a new string
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *start_of_string;

	start_of_string = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest++;
	*dest = '\0';
	return (start_of_string);
}
