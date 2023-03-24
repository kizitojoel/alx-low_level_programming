/**
 * _isupper - checks if a value is uppercase
 * @c: the character to be checked(integer)
 * Description: uses ASCII
 * Return: returns 1 if a character is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

