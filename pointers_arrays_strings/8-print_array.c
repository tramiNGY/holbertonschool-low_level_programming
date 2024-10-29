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

if (n == 1)
printf("%d, ", a[0]);
for (i = 0; i < n - 1; i++)
	printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}
