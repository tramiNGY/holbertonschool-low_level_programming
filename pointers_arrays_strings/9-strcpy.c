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
int length;

i = 0;
length = 0;

while (src[length] != '\0')
{
	length++;
}

while (i < length)
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}
