#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n : number of elements of the array
*/
void reverse_array(int *a, int n)
{
int i, j;
int temp[n];

	for (i = 0; i < n / 2; i++)
	{
		temp[i] = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp[i];
	}
}
