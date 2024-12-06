#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
*/

void free_list(list_t *head)
{
list_t *tempnode;

if (head == NULL)
	return;

while (head != NULL)
{
	tempnode = head;
	head = head->next;
	free(tempnode->str);
	free(tempnode);
}
}
