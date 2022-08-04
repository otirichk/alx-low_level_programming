#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid created in the previous project
 * 3-alloc_grid
 *
 * @grid: the existing grid created
 * @height: the array of rows
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
