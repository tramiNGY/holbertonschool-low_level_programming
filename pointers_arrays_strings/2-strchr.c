#include "main.h"

/**
 * *_strchr - returns pointer to the 1st occurence of the character c
 * in string s
 * or NULL if character not found
 * @s: string
 * @c: char
 * Return: returns pointer to occurence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (*s == c)
		return (s);
return (0);
}
