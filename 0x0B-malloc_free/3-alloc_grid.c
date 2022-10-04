#include"main.h"
/**
 * alloc_grid - returns a pointer to a 2-D array
 * of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	grid = (int *)calloc((width + height), sizeof(int *));

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			printf("%d", *grid[w]);
		}
		_putchar('\n');
	}
	return (grid);
}
