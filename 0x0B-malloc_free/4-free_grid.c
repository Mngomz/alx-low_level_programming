#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid.
 *
 * @grid: multidimensional array
 *
 * @height: height of the grid
 *
 * Return: empty
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
	free(grid[r]);
	}
	free(grid);
}
