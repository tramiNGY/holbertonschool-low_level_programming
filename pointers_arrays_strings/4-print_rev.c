#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
*/

void print_rev(char *s)
{
int i;
int length;
i = 0;
length = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	
	while (0 <= length)
	{
		_putchar(s[length]);
		length--;
	}
_putchar('\n');
}
