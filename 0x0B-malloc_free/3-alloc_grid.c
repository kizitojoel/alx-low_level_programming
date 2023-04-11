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
	int i = 0;
	int j = 0;

	if (height < 1 || width < 1)
		return (NULL);
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			for (i--; i > 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
