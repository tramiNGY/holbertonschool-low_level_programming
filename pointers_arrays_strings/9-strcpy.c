#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copies string pointed to buffer
 * @dest: char
 * @src: char
 * Return: returns pointer
*/

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i + 1] = '\0';
return (dest);
}
