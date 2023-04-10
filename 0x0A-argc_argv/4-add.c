#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: number
 * @argv: array
 *
 * Return: 0 if okay
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		if (*ptr < 48 || *ptr > 57)
		{
			printf("Error\n");
			return (1);
		}
		while (ptr[1] != '\0')
		{
			if (*ptr < 48 || *ptr > 57)
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
