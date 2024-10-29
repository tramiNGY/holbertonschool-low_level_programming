#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: returns 0
*/

int _strlen(char *s)
{
int i;
i = 0;

	while (s[i] != '\0')
		i++;
return (i);
}
