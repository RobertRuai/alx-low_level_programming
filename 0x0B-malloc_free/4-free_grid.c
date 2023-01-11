#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - entry point
 *
 * description - a function that frees a 2 dimensional grid previously created
 *
 * @grid: The character to print
 * @height: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
