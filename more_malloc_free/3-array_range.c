#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * contain all the values from min (included) to max (included)
 * ordered from min to max
 * @min: mininum int value
 * @max: maximum int value
 * Return: returns int array from min to max values
*/

int *array_range(int min, int max)
{
int i, j;
int *range;

if (min > max)
	return (NULL);

range = malloc(sizeof(int) * (max - min + 1));

if (range == NULL)
	return (NULL);

for (i = 0, j = min; i < (max - min + 1); i++, j++)
	range[i] = j;

return (range);
}

