#include <stdio.h>
#include "main.h"

void puts2(char *str)
int i;

for (i = 0; i <#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
*/

void puts2(char *str)
{
int i = 0;
int len;
	
	len = 224;
	while (str[i] != '\0')
	{
		if (i <= len)
		{
			_putchar(str[i]);
		}
		i = i + 2;
	}
	_putchar('\n');
}
