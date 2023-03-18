#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This is the main program function
 *
 * Description: It prints the last digit of a random number
 * Return: Returns 0 if executed properly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int rem = n % 10;
	printf("Last digit of %d is ", n);

	if (rem > 5)
	{
		printf("%d and is greater than 5\n", rem);
	}
	else if (rem == 0)
	{
		printf("%d and is 0\n", rem);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", rem);
	}
	return(0);
}
