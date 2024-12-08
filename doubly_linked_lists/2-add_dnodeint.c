#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to a dlistint_t structure
 * @n: integer data of the new node
 * Return: returns the address of the new element or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
newnode->n = n;
newnode->next = *head;
newnode->prev = NULL;

*head = newnode;

return (newnode);
}
