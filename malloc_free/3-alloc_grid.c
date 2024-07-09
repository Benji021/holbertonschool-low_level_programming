#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width : width of the matrix
 * @height : height of the matrix
 * Return : NULL on failure or is 0 or negative
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
