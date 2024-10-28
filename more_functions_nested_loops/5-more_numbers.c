#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
*/

void more_numbers(void)
{
int i = 0;
int j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
	_putchar('\n');
	i++;
	j = 0;
	}
}
