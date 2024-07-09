#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid : double pointer 2d grid
 * @height : height of grid
 * Return : void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
