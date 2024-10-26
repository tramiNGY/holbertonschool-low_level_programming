#include <stdio.h>
#include "main.h"
/**
 * times_table- prints 9 times table
*/
void times_table(void)
{
int i;
int j;
int num;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
		num = i * j;
			if (num < 10 && j != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
				_putchar(',');
			}
			if (num < 10 && j == 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			if (num > 9 && j != 9)
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
			}
			if (num > 9 && j == 9)
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
