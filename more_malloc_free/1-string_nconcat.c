#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings containing
 * string 1 and first n bytes of string 2
 * @s1: string 1
 * @s2: stirng 2
 * @n: number of elements to copy from s2
 * Return: returns concat string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, length1;
char *concat;

length1 = 0;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[length1] != '\0')
	length1++;

concat = malloc(sizeof(char) * (length1 + n + 1));

if (concat == NULL)
	return (NULL);

for (i = 0; i < length1; i++)
	concat[i] = s1[i];

for (j = 0; j < n; j++, i++)
	concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}
