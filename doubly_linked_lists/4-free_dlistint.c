#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first node of the list
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *tempnode;

if (head == NULL)
	return;

while (head != NULL)
{
	tempnode = head;
	head = head->next;
	free(tempnode);
}
}
