#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks main function
 * @argc: the number
 * @argc: argument vector
 *
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
