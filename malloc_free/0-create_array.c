#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: array size
 * @c: char
 * Return: returns NULL if fail or size = 0
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);
	if (s == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}
return (s);
}
