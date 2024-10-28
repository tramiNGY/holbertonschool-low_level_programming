#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: int triangle size
*/

void print_triangle(int size)
{
int i;
int j;
int k;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar (' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
else
_putchar('\n');
}
