#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height dimesion of grid
 * Description: Frees of the grid
 *
 * Return: nothing return
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
