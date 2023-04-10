#include <stdio.h>
#include <stdlib.h>
int cents(int number, int count);

/**
 * main - checks the code
 * @argc: number of args
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	printf("%d\n", cents(number, 0));
	exit(EXIT_SUCCESS);
}

/**
 * cents - returns the minimum number of coins
 * @number: the number of cents
 * @count: the count of coins being returned
 *
 * Return: the number of coins
 */
int cents(int number, int count)
{
	if (number == 0)
	{
		return (count);
	}
	if (number >= 25)
	{
		count = count + number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		count = count + number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		count = count + number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		count = count + number / 2;
		number = number % 2;
	}
	if (number >= 1)
	{
		count = count + number;
		number = 0;
	}
	return (count);
}
