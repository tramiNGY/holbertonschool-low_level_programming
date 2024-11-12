#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: returns NULL if fails
 * Remark: str_save permits to preserve the start of the pointer to str
 * before calculating its length and points until '\0'
*/

char *_strdup(char *str)
{
unsigned int i, length;
char *str_copy, *str_save;

length = 0;
str_save = str;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str_copy = malloc(sizeof(char) * (length + 1));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		str_copy[i] = str_save[i];

	str_copy[length] = '\0';

return (str_copy);
}
