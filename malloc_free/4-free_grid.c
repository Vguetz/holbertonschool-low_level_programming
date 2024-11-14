#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: grid to liberate memory
 * @height: quantity of memory
 *
 * Return: void|
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
