#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;
	char *concat1;
	char *concat2;

	concat = string_nconcat("Best ", "School !!!", 6);
	concat1 = string_nconcat(NULL, "HELLO", 3);
	concat2 = string_nconcat("There", "fore", 5);
	printf("%s\n", concat);
	printf("%s\n", concat1);
	printf("%s\n", concat2);
	free(concat);
	return (0);
}
