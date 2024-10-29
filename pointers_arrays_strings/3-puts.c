#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
*/

void _puts(char *str)
{
int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
_putchar('\n');
}
