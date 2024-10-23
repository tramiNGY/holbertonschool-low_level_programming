#include <stdio.h>
#include "main.h"
/**
 * print_sign - return sign of number
 * @n: int number
 * Return: returns 1 0 or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
}
