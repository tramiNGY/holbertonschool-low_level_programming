#include <stdio.h>
#include "main.h"
/**
 * * _strcat - concatenates string 2 to string 1
 * @dest: string 1
 * @src: string 2
 * Return: returns char
*/

char *_strcat(char *dest, char *src)
{
int i, j, length;

length = 0;

while (dest[length] != '\0')
	length++;
for (i = length, j = 0; src[j] != '\0'; i++, j++)
	dest[i] = src[j];
dest[i] = '\0';
return (dest);
}

