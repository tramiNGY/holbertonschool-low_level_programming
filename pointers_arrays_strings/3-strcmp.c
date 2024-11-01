#include "main.h"
/**
 * _strcmp - compare 2 strings differences
 * @s1: string 1
 * @s2: string 2
 * Return: returns int diff between 2 ASCII values
*/

int _strcmp(char *s1, char *s2)
{
int i;
int comp;

for (i = 0; s1[i] != '\0'; i++)
	if (s1[i] == s2[i])
		comp = 0;
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
return (comp);
}
