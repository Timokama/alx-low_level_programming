#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the assigned memory of the matrix
 * @grid: the matrix
 * @height:rows
 *
 * Return: matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
