#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of array of integer
 * @a: array
 * @n: int
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
	printf("%d, ", a[i]);
if (n > 0)
	printf("%d\n", a[n - 1]);
else
	printf("%d\n", a[0]);
}
