#include"main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D grid to be freed
 * @height: number of rows of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		_putchar('O');
		_putchar('K');
		_putchar('\0');
	}
	else
	for (; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

