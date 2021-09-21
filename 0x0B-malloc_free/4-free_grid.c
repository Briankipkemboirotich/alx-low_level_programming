#include "main.h"
#include <stlib.h>

/**
 * free_grid - frees  2D grid created by alloc_grid
 *@grid: pointer to array
 *@height: number of rows
 *Return: nothing, frees memory
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
