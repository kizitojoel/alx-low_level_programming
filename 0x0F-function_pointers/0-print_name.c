/**
 * print_name - calls the passed function
 * @name: the string to be printed
 * @f: the function to be used
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
