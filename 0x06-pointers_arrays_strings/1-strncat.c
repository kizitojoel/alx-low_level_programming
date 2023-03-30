#include "main.h"

/**
 * _strncat - selectively concatenates strings
 * @dest: destination string
 * @src: source string
 * @n: the number of characters
 * Description: picks up to n character sfrom source
 * Return: the destination  pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start_of_string;
	int i;

	i = 0;
	start_of_string = dest;
	while (*dest != '\0')
		dest++;
	for (i = 0; i < n && src[i]; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start_of_string);
}
