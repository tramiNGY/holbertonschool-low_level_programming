#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - point to a newly allocated space in memory
 * which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * @s1: 1st string
 * @s2: 2nd string
 * Return: returns NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
int i, j, length1, length2;
char *concat, *s1_save, *s2_save;

s1_save = s1;
s2_save = s2;

if (s1 == NULL)
	return(s2);
if (s2 == NULL)
	return(s1);
if (s1 == NULL && s2 == NULL)
	return (NULL);

while (*s1 != '\0')
{
	length1++;
	s1++;
}

while (*s2 != '\0')
{
	length2++;
	s2++;
}

concat = malloc(sizeof(char) * (length1 + length2 + 1));

if (concat == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
	concat[i] = s1_save[i];

for (j = length1, i = 0; j < length1 + length2, i < length2; j++, i++)
	concat[j] = s2_save[i];

concat[length1 + length2] = '\0';
return (concat);
}
