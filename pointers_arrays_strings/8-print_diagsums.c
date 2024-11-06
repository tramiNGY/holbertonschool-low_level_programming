#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonals of square matrix of integer
 * @a: square matrix
 * @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++)
{
	sum1 = sum1 + *(a + i * size + i);
	sum2 = sum2 + *(a + i * size + (size - i - 1));
}
printf("%d, %d\n", sum1, sum2);
}
