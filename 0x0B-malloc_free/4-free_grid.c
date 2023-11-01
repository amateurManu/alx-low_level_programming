#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid from previous function
 * @height: grid dimension
 * Return: no value
 */

void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
