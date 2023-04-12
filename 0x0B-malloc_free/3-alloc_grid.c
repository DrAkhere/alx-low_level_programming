#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Entry point that returns a pointer to a 2 dimensional array
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: Return NULL(failure of width/height = 0 or -ve else Return pointer
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int row;
	int column;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = (int **)malloc(height * sizeof(int *));
	if (z == 0)
	{
		free(z);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		z[x] = (int *)malloc(width * sizeof(int));
		if (z[x] == 0)
		{
			for (y = 0; y <= x; y++)
			{
				free(z[y]);
			}
			free(z);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			z[row][column] = 0;
	}
	return (z);
}
