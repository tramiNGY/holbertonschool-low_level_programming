#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array set to 0
 * @nmemb: number of elements
 * @size: data type size of element
 * Return: returns NULL if fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
	ptr[i] = 0;

ptr[nmemb] = '\0';

return (ptr);
}
