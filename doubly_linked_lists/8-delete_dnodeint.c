#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node that should be deleted
 * index starts at 0
 * Return: returns a if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tempnode;
unsigned int i;

	if (*head == NULL)
		return (-1);

tempnode = *head;

	if (index == 0)
	{
		*head = tempnode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tempnode);
		return (1);
	}

i = 0;
	while (tempnode != NULL)
	{
		if (i == index)
		{
			tempnode->prev->next = tempnode->next;
			if (tempnode->next != NULL)
				tempnode->next->prev = tempnode->prev;
			free(tempnode);
			return (1);
		}
		tempnode = tempnode->next;
		i++;
	}
return (-1);
}
