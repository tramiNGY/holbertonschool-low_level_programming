#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonals of square matrix of integer
 * @a: square matrix
 * @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
long int i, j, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i <= (size * size); i = i + size + 1)
	sum1 = sum1 + *(a + i);

for (j = 0; j <= (size * size) - size; j = j + size - 1)
	sum2 = sum2 + *(a + j);

printf("%li , %li\n", sum1, sum2);
}
