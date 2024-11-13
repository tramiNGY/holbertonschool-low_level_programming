#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: array of pointers pointing to int
 * @height: height of grid nb of lines
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(grid[i]);

free(grid);
}
