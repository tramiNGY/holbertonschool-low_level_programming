#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in arguments
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list listnumb;
unsigned int i;

if (separator != NULL && n > 0)
{
	va_start(listnumb, n);

	for (i = 2; i <= n; i++)
	{
		printf("%d", va_arg(listnumb, int));
		printf("%s", separator);
	}
	printf("%d\n", va_arg(listnumb, int));
	va_end(listnumb);
}
}
