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
int i, j, firstoccur, condition;

firstoccur = 0;

if (needle[0] == '\0')
{
	return (haystack);
}

for (i = 0; haystack[i] != '\0'; i++)
{
	if (haystack[i] == needle[0])
	{
		firstoccur = i;
		condition = 1;
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
				j++;
		}
		if (needle[j] == '\0')
			condition = 1;

		else
			condition = 0;
	}
	if (condition == 1)
		return (haystack + firstoccur);
}
return ("");
}
