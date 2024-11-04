#include "main.h"
/**
 * *_memset - fills the first n bytes of memory area pointed to by s
 * with the constant byte b
 * @s: string
 * @b: char
 * @n: int
 * Return: returns pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
