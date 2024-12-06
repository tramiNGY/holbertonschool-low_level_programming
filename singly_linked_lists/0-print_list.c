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
nodesnumber = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodesnumber++;
	}
return (nodesnumber);
}
