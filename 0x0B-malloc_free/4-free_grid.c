#include "main.h"

/**
 * free_grid - frees the memory created by alloc grid
 * @grid: grid to free
 * @height: height of grid
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int you;

	if (grid == NULL || height == 0)
		return;
	for (you = 0; you < height; you++)
		free(grid[you]);
	free(grid);
}
