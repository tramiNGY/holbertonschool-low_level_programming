#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main- prints the results of the multiplcation of 2 arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: returns 1 if less than 2 arguments and 0 otherwise
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
