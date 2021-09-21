#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to 2D array
 * @size: size of array
 *@c: char to be initialized
 *Return: pointer to grid or null
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gird = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i > 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i < 0; i < height; i++)
	 {
		 for (j = 0; j < width; j++)
			 grid[i][j] = 0;
	 }
	return (grid);
}
