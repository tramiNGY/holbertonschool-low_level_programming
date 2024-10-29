#include <stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
int n;

n = *b;
*b = *a;
*a = n;
}
