#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - returns 1 if lowercase and 0 if not
 * @c: character
 * Return: returns 1 or 0
*/

int _islower(int c)
{
if (islower(c) != 0)
return (1);
else
return (0);
}
