/**
 * swap_int - swaps two integers
 * @a: first integer pointer
 * @b: second interger pointer
 * Description: creates a swap file variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
