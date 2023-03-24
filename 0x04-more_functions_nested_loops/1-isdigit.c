/**
 * _isdigit - checks if a value is a digit
 * @c - the test value
 * Description: checks using ascii
 * Return: Returns 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

