#include "main.h"
/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string 1
 * @src: string 2
 * @n: int
 * Return: returns pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}
