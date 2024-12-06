#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a list_t structure
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nodesnumber;
const list_t *hcopy;

nodesnumber = 0;
hcopy = h;

	if (hcopy == NULL)
		return (0);

	while (hcopy != NULL)
	{
		if (hcopy->str != NULL)
			printf("[%u] %s\n", hcopy->len, hcopy->str);
		else
			printf("[0] (nil)\n");

		hcopy = hcopy->next;
		nodesnumber++;
	}
return (nodesnumber);
}
