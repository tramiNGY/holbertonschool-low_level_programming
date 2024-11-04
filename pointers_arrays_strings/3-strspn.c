#include "main.h"

/**
 * _strspn - returns segment of string 1
 * which consists only of bytes from string 2
 * ie count number of occurence of each elements of string 2 in string 1 until
 * encounter element in string 1 different than element in string 2
 * @s: string 1
 * @accept: string 2
 * Return: returns count
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count;

count = 0;

for (i = 0; s[i] != '\0'; i++)
{
	if (i == count)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
}
return (count);
}
