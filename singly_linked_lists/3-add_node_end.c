#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of the list_t list
 * @head: pointer to pointer to the first node in the list
 * @str: string to be copied and stored in the new node
 * Return: the address ot the new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *tempnode;
unsigned int length;

length = 0;
while (str[length] != '\0')
	length++;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);

newnode->str = strdup(str);
newnode->len = length;
newnode->next = NULL;

if (*head == NULL)
	*head = newnode;

else
{
	tempnode = *head;
	while (tempnode->next != NULL)
		tempnode = tempnode->next;
	tempnode->next = newnode;
}
return (newnode);
}
