#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to a list_t structure
 * Return: returns number of elements of list
*/

size_t list_len(const list_t *h)
{
unsigned int nodesnumber;

	while (h != NULL)
	{
		nodesnumber++;
		h = h->next;
	}
return (nodesnumber);
}
