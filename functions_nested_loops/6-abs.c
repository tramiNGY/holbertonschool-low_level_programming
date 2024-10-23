#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @a: integer
 * Return: returns int
*/
int _abs(int a)
{
if (a >= 0)
return (a);
if (a < 0)
{
a = a * (-1);
return (a);
}
return (0);
}
