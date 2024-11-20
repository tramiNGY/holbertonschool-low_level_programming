#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Remark: if separator NULL don't print it
 * if one of string is NULL, print (nil) instead
 * Remark2: tempstr is temp string containing copy of
 * current va_arg before it goes to next argument
 * so when tempstr is tested in if statement instead of
 * va_arg, it doesnt go to next argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list liststr;
unsigned int i;
char *tempstr;

if (n == 0)
	printf("\n");

else
{
	va_start(liststr, n);

	for (i = 0; i < n - 1; i++)
	{
		tempstr = va_arg(liststr, char *);
		if (tempstr != NULL)
			printf("%s", tempstr);
		else
			printf("(nil)");

		if (separator != NULL)
			printf("%s", separator);
	}
	tempstr = va_arg(liststr, char *);
		if (tempstr != NULL)
			printf("%s\n", tempstr);
		else
			printf("(nil)\n");
	va_end(liststr);
}
}
