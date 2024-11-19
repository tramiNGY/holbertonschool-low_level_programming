#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - returns result of operation
 * @argc: number of arguments should be 4
 * @argv: arguments array of string
 * Return: returns operation value int
*/

int main(int argc, char **argv)
{

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
{
	printf("Error\n");
	exit(100);
}

if (argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*'
	|| argv[2][0] == '/' || argv[2][0] == '%')
{
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
}

else
{
	printf("Error\n");
	exit(99);
}
return (0);
}
