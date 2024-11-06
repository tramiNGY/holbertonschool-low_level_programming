#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds 1st occurence of substring 2 in string 1
 * @haystack: string 1
 * @needle: substring 2
 * Return: returns beginning of located substring or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

i = 0;
j = 0;

if (needle[0] == '\0')
	return (haystack);

while (haystack[i] != '\0')
{
	while (haystack[i] == needle[j])
	{
		j++;
		i++;
	}

	if (needle[j] == '\0')
		return (haystack + i - j);
	else if (haystack[i] != needle[j])
		i++;
}
return (0);
}
