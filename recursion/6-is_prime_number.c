#include "main.h"

/**
 * divider - checks from n - 1 to 1 if n has a divider other than 1
 * @x: int potential divider of n
 * @n: int number to be checked if prime or composite
 * Return: returns int
 * Remark: the condition if (x == 1) must be first condition or error
*/

int divider(int x, int n)
{

if (x == 1)
	return (1);

if (n % x == 0)
	return (0);

return (divider(x - 1, n));
}

/**
 * is_prime_number - returns 1 if is prime number, 0 otherwise
 * definition : prime number is only divisible by 1 and itself
 * remark: the opposite of a prime number is a composite number
 * @n: int
 * Return: returns int prime
*/

int is_prime_number(int n)
{
if (n <= 1)
	return (0);

if (n == 2)
	return (1);

if (n % 2 == 0)
	return (0);

return (divider(n - 1, n));
}
