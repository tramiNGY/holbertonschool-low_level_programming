#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end ot dlistint_t list
 * @head: pointer to pointer to the first node of the list
 * @n: integer data of the node
 * Return: returns the address of the new element or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *tempnode;

newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;

if (*head == NULL)
	*head = newnode;

else
{
	tempnode = *head;
	while (tempnode->next != NULL)
		tempnode = tempnode->next;
	tempnode->next = newnode;
	newnode->prev = tempnode;
}
return (newnode);
}
