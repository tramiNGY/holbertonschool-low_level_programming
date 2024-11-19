#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * returns index of 1st element cmp function does not return 0
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to a function to be used to compare values
 * Return: return -1 or index of element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);

}

return (-1);
}
