#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the first letter of a string
 * Description: swaps places in a string
 * Return: void
 */
void rev_string(char *s)
{
	int count;
	int i;
	char tmp;

	count = 0;
	i = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	
	for (i = 0; i <= count / 2; i++)
	{
		tmp = *(s + i);
		s[i] = s[count - i - 1];
		s[count - i - 1] = tmp;
	}
}
