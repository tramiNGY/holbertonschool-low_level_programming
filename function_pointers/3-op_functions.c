#include "3-calc.h"


/**
 * op_add - returns sum o a and b
 * @a: int
 * @b: int
 * Return: int sum
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns difference of a and b
 * @a: int
 * @b: int
 * Return: int difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns product of a and b
 * @a: int
 * @b: int
 * Return: int product
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - return result of division of a by b
 * @a: int quotient
 * @b: int divisor
 * Return: Returns dividend
*/

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - return remainder of the division of a by b
 * @a : int quotient
 * @b: int divisor
 * Return: Returends remainder (modulo result)
*/

int op_mod(int a, int b)
{
	return (a % b);
}
