#include "main.h"
/**
 * *_strncat - concatenates string 2 up to n bytes to string 1
 * @dest: string 1
 * @src: string 2
 * @n: max bytes to copy from string 2
 * Return: return string concatenated
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j, length;

length = 0;

while (dest[length] != '\0')
	length++;

for (i = length, j = 0; src[j] != '\0' && j < n; i++, j++)
	dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
