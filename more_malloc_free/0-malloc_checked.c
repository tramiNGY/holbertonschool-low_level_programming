#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int b size of memory allocated
 * Return: returns 0
 * Remark: exit function causes normal process termination
 * 98 is an arbitrary value
*/

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);

return (ptr);
}
