#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the first node of the list
 * Return: returns the sum of all the data
*/

int sum_dlistint(dlistint_t *head)
{
int datasum;

datasum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		datasum += head->n;
		head = head->next;
	}

return (datasum);
}
