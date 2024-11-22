#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints char argument from printall
 * @printall: va_list containing all the variadic arguments
 * to be printed
 * Remark1: printall va_list already defined and itilialized
 * in main function print_all
 * Remark2: tempchar copies current char argument value
 * before va_arg points to next argument
 * Remark3: when passed to va_arg, char type becomes int type
*/

void print_char(va_list printall)
{
char tempchar;

tempchar = va_arg(printall, int);

	printf("%c", tempchar);
}

/**
 * print_integer - prints int argument from printall
 * @printall: va_list containing all the variadic arguments
 * to be printed
 * Remark: tempint copies current int argument value
 * before va_arg points to next argument
*/

void print_integer(va_list printall)
{
int tempint;

tempint = va_arg(printall, int);

	printf("%i", tempint);
}


/**
 * print_float - prints float argument from printall
 * @printall: va_list containing all the variadic arguments
 * to be printed
 * Remark1: tempint copies current float argument value
 * before va_arg points to next argument
 * Remark2: when passed to va_arg, float type becomes double type
*/

void print_float(va_list printall)
{
float tempfloat;

tempfloat = va_arg(printall, double);

	printf("%f", tempfloat);
}

/**
 * print_string - prints char * (string)  argument from printall
 * @printall: va_list containing all the variadic arguments
 * to be printed
 * Remark1: tempint copies current string argument value
 * before va_arg points to next argument
 * Remark2: if tempstring NULL, return to quit function
 * and ignore following line printing tempstring
*/

void print_string(va_list printall)
{
char *tempstring;

tempstring = va_arg(printall, char *);

	if (tempstring == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", tempstring);
}

/**
 * print_all - main function which prints all variadic arguments
 * of type char "c", int "i", float "f" and string "s"
 * any other type is ignored
 * @format: list of types of arguments passed to the function
 * Remark1: Datatype struct defined in header and contains
 * char *specifier which is 1st letter of each type followed by
 * function pointer (*print_type) pointing to function
 * which prints argument of associated type
 * Remark2: printall is va_list type containing
 * all the variadic arguments to print
 * Remark3: separator is char string to be printed
 * between each argument printed
 * 1st initialized with "" empty string before 1 argument,
 * then modified to ", "vto be printed before each argument
 * (including before last argument) then line return at the end
 * Remark4: taking printall as parameter of
 * datatype[j].print_type permits to no call va_arg macro
 * at that moment with unknown/variable type as 2nd parameter
*/

void print_all(const char * const format, ...)
{
Datatype datatype[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
};

va_list printall;
int i, j;
char *separator;

va_start(printall, format);
i = 0;
j = 0;
separator = "";

while (format[i] != '\0')
{
	while (datatype[j].specifier != NULL)
	{
		if (format[i] == *datatype[j].specifier)
		{
			printf("%s", separator);
			datatype[j].print_type(printall);
			separator = ", ";
		}
		j++;
	}
	j = 0;
	i++;
}
va_end(printall);
printf("\n");
}
