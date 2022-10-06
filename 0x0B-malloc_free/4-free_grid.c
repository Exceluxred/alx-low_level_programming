#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - frees a 2 dimensional grid/array
 *@grid: two dimensional grid/array
 *@height: rows
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
