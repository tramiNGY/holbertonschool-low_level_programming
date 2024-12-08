#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: dlistint_t list
 * Return: returns number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
unsigned int nodenumbers;

nodenumbers = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	nodenumbers++;
	h = h->next;
}
return (nodenumbers);
}
