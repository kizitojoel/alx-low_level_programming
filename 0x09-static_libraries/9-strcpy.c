#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination pointer
 * @src: source pointer
 * Description: dereferencing
 * Return: returns the destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}
