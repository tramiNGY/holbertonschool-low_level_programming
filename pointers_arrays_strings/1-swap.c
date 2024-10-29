#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 * @a: int
 * @b: int
*/
void swap_int(int *a, int *b)
{
int n;

n = *b;
*b = *a;
*a = n;
}
