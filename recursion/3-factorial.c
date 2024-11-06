#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: int
 * Return: returns int
*/

int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
