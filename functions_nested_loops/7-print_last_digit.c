#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: int number
 * Return: returns int
*/

int print_last_digit(int r)
{
if (r == 0)
	_putchar('0');
else if (r > 0)
	_putchar('0' + (r % 10));
else if (r < 0)
{
	r = r * (-1);
	_putchar('0' + (r % 10));
}
else
	_putchar('0' + r);

return (0);
}
