#include "main.h"
/**
 * heron_sqrt_recursion - calculates recursive approximation of
 * the square root with the Heron's method
 * @n: int number we want the square root of
 * @x_old: the recursive parameter of Heron's formula ie the square root
 * Return: returns square root
*/

int heron_sqrt_recursion(int n, int x_old)
{
int x_new;

x_new = (x_old + n / x_old) / 2;

if (x_old - x_new == 0)
	return (x_new);

return (heron_sqrt_recursion(n, x_new));
}


/**
 * _sqrt_recursion - returns the natural square root
 * of a number if result is an int
 * @n: int
 * Return: returns square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (heron_sqrt_recursion(n, n) * heron_sqrt_recursion(n, n) == n)
		return (heron_sqrt_recursion(n, n));

	else
		return (-1);
}
