#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list printall);
void print_integer(va_list printall);
void print_float(va_list printall);
void print_string(va_list printall);


/**
 * struct type - Struct type
 * @specifier: the data type specifier for printf
 * @print_type: function print associated with the specifier
 * for each data type
*/

typedef struct type
{
	char *specifier;
	void (*print_type)(va_list printall);
} Datatype;

#endif
