#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2D grid created by alloc_grid
* @grid: Pointer to the grid to free
* @height: Height of the grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}
