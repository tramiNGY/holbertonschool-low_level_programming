#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the first node of the list
 * @str: string to be copied and stored in new node
 * Return: returns the address of the new node and NULL if fails
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int length;

length = 0;
while (str[length] != '\0')
	length++;

newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
newnode->len = length;
newnode->next = *head;

*head = newnode;

return (newnode);
}
