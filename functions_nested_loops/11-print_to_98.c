#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: int number
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("%d\n", 98);
	}
	else
		printf("%d\n", n);
}
