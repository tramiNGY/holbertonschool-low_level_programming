#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: returns NULL if fails
 * Remark updated: no need to preserve start of pointer if
 * calculate length with index without moving pointer position
 * so no need to add additional *str_save pointer to copy
 * original pointer position of str
*/

char *_strdup(char *str)
{
unsigned int i, length;
char *str_copy;

length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	str_copy = malloc(sizeof(char) * (length + 1));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		str_copy[i] = str[i];

	str_copy[length] = '\0';

return (str_copy);
}
