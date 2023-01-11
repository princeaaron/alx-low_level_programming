#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: pointer to a grid
 * @height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
