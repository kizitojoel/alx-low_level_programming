#include <stdlib.h>
#include <stdio.h>

/**
 * main - main program function
 * @argc: the number of arguments
 * @argv: argument vector
 * Description: prints the file name
 * Return: EXIT_SUCCESS
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
