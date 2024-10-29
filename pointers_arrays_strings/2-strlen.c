#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: returns length of s
*/

int _strlen(char *s)
{
int i;

	while (s[i] != '\0')
		i++;
return i;
}
