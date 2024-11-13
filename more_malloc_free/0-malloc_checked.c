#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * if malloc fails, process terminates with value of 98
 * @b: unsigned int b size of memory allocated
 * Return: returns 0
*/

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
	*ptr = 98;
}
