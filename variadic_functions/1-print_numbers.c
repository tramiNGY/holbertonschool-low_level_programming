#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in arguments
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
 * Remark: n is the last fixed (non variadic) const
 * the variadic arguments are after n (all int to print)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list listnumb;
unsigned int i;

if (n == 0)
	printf("\n");

va_start(listnumb, n);

for (i = 0; i < n - 1; i++)
{
	printf("%d", va_arg(listnumb, int));

	if (separator != NULL)
		printf("%s", separator);
}
	printf("%d\n", va_arg(listnumb, int));
	va_end(listnumb);
}
