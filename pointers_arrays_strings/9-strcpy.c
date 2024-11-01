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

for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
dest[i + 1] = '\0';
return (dest);
}
