#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to a dlistint_t structure
 * Return: returns number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
unsigned int nodesnumber;

nodesnumber = 0;

while (h != NULL)
{
	nodesnumber++;
	h = h->next;
}
return (nodesnumber);
}
