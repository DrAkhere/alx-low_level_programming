#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point that frees 2D grid previously created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: The height of the grid
 *
 * Return: Return nothing at this point
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
