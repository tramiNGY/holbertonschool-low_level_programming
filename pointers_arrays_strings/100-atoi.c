#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: string
 * Return: returns interger
*/

int _atoi(char *s)
{
int i;
unsigned int num;
int sign;

i = 0;
num = 0;
sign = 1;
do {
	if (*s  >= 48 && *s <= 57)
	{
		num =  num * 10 + (*s - '0');
	}
	else if (*s == 45)
	{
		if (sign == -1)
			sign = 1;
		else
			sign = -1;
	}
	else if (num > 0)
		break;
} while (*s++);
return (num *sign);
}
