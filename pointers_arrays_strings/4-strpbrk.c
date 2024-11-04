#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - Locates 1st occurence in string 1 of any bytes in string 2
 * @s: string 1
 * @accept: string 2
 * Return: returns pointer to the byte s matching one of the byte
 * or NULL if no such byte found
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
}
return (s);
}
