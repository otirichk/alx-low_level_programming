#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer to a 2 dimentional
 * array of integers
 *
 * @width: the array containing the columns
 * @height: the array containing rows
 *
 * Return: NULL on failure
 * a 2 dimentional array on success
 *
 */

int **alloc_grid(int width, int height)
{
	int width_count, height_count;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	for (height_count = 0; height_count < height; height_count++)
	{
		grid[height_count] = malloc(sizeof(int) * width);

		if (grid[height_count] == NULL)
		{
			for (; height_count >= 0; height_count--)
			{
				free(grid[height_count]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (height_count = 0; height_count < height; height_count++)
	{
		for (width_count = 0; width_count < width; width_count++)
		{
			grid[height_count][width_count] = 0;
		}
	}
	return (grid);
}
