#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number
 * @argv: array
 *
 * Return: 0 if okay, 1 if error
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
