#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string
*/

void puts_half(char *str)
{
int i;
int length;
i = 0;

	while (str[i] != '\0')
		i++;
	length = i;

	for (i = length / 2 - 1; i < length; i++)
		_putchar(str[i]);
_putchar('\n');
}
