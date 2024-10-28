#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int
 * @i: int
 * @j: int
*/

void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
	for (i = 0; i < n; i++)
	{			
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
else
_putchar('\n');
}
