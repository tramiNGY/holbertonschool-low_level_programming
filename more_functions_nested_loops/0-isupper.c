#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int character
 * Return: returns 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
