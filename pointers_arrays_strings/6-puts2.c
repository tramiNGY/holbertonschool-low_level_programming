#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
*/

void puts2(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (i <= 224)
		{
			_putchar(str[i]);
		}
		i = i + 2;
	}
	_putchar('\n');
}
