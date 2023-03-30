#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: the string to convert
 * Return: address to converted string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
