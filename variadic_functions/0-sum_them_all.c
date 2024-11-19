#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the function parameters
 * @n: max index of parameter
 * ie number of parameter + 1 for index 0
 * Return: returns int sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list listsum;
unsigned int i;
int sum;

i = 0;

if (n == 0)
	return (0);

va_start(listsum, n);
sum = n;

for (i = 1; i < n; i++)
	sum += va_arg(listsum, int);

va_end(listsum);

return (sum);
}
