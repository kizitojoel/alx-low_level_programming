#include "main.h"
#include <stdio.h>

/**
 * main - main loop
 *
 * Description: returns absolute values
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _abs(-45);
	printf("%d\n", r);
	r = _abs(9);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(-23982384);
	printf("%d\n", r);

	return (0);
}

