#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * alloc_grid - returns pointer to a 2d array
  * @width: width of 2d array
  * @height: height of 2d array
  * Return: Pointer to 2d array
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (hi = 0; hi < height ; hi++)
	{
		grid[hi] = malloc(width * sizeof(int));

		if (grid[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(grid[hi]);
			free(grid);
			return (NULL);
		}
	}
	for (hi = 0; hi < height ; hi++)
	{
		for (wi = 0; wi < width; wi++)
			grid[hi][wi] = 0;
	}

	return (grid);
}
