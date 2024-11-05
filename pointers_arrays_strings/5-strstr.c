#include "main.h"

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

for (i = 0; haystack[i] != '\0'; i++)
{
	if (haystack[i] == needle[0])
	{
		firstoccur = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				condition = 1;
				i++;
			}
			else
				condition = 0;
		}
		if (condition == 1)
			return (haystack + firstoccur);
	}
}
return ("");
}
