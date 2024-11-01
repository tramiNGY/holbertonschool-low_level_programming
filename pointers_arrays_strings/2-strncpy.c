#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - fill a fixed-size buffer with non-null bytes from a string,
 * padding with null bytes as needed
 * @dest: string 1
 * @src: string 2 to concatenate to string 1
 * @n: max character to concatenate from string 2
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i]; 
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}
