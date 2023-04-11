#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a grid
 * @width: the width
 * @height: the heught
 *
 * Return: the pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *arr;
	int i = 0;
	int j = 0;

	if (height < 1 || width < 1)
		return (NULL);
	grid = malloc(sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		arr = malloc(sizeof(int) * width);
		while (j < width)
		{
			arr[j] = 0;
			j++;
		}
		grid[i] = arr;
		i++;
	}
	return (grid);
}
