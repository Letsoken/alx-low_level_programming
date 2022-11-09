#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * free_grid - frees memory allocated to 2d array
  * @grid: 2d array
  * @height: height of 2d array
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
		free(grid[height]);

	free(grid);
}
