#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of int
 * @size: unsigned long int size of array
 * @action: pointer to the function used
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

for (i = 0; i < size; i++)
	action(array[i]);

}
