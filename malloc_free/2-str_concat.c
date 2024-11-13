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
 * Remark: same as for 1-strdup, no need for pointers
 * to save position if we calculte length by index
 * Remark: if s1 or s2 NULL, instead of returning 
 * the non-null one, make it empty string
*/

char *str_concat(char *s1, char *s2)
{
int i, j, length1, length2;
char *concat;

length1 = 0;
length2 = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[length1] != '\0')
	length1++;

while (s2[length2] != '\0')
	length2++;

concat = malloc(sizeof(char) * (length1 + length2 + 1));

if (concat == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
	concat[i] = s1[i];

for (j = length1, i = 0; j < length1 + length2; j++, i++)
	concat[j] = s2[i];

concat[length1 + length2] = '\0';
return (concat);
}
