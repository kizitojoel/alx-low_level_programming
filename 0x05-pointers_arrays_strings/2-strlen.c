/**
 * _strlen - counts the lengths of a string
 * @s: the pointer to the beginning of a string
 * Description: uses pointer arithmetic
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s++) != '\0')
	{
		length++;
	}
	return (length);
}
