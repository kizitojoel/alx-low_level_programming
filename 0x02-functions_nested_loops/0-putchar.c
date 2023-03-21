#include "main.h"
#include <string.h>

/**
 * main - main function
 * 
 * Description: prints _putchar
 * Return: Returns 0
 */
int main(void)
{
	int i;

	char my_string[] = "_putchar";
	for (i = 0; i < (int) strlen(my_string); i++)
		_putchar(my_string[i]);
	_putchar('\n');
	return 0;
}

