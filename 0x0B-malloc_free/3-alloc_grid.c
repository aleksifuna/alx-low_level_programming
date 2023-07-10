#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: a pointer to a 2 D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
