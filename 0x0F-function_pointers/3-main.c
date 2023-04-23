#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check my code
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);
	if (f == NULL)
		exit(99);
	if (b == 0 && (op[0] == '%' || op[0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
