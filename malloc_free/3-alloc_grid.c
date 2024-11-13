#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of array int for columns
 * @height: height of array int for lines
 * Return: returns NULL if fail
 * Remark: each line of grid is a pointer
 * so type of grid[i] is int*
 * Remark2: Added free if one line is NULL
 * to free all previous allocated lines
 * then to free grid main array
*/

int **alloc_grid(int width, int height)
{
int **grid, i, j;

if ((width <= 0) || (height <= 0))
	return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);

	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(grid[j]);

	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
}
return (grid);
}
