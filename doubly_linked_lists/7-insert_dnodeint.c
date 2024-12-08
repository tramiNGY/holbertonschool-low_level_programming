#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the first node of the list
 * @idx: index of the list where the new node should be added
 * index starts at 0
 * @n: integer data of the new node
 * Return: returns the address of the new node or NULL if fail
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode;
dlistint_t *tempnode;
unsigned int i;

newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
tempnode = *h;
i = 0;
	while (tempnode != NULL)
	{
		if (i == idx - 1)
		{
			newnode->next = tempnode->next;
			newnode->prev = tempnode;

			if (tempnode->next != NULL)
				tempnode->next->prev = newnode;
			tempnode->next = newnode;
			return (newnode);
		}
		tempnode = tempnode->next;
		i++;
	}
	free(newnode);
	return (NULL);
}
