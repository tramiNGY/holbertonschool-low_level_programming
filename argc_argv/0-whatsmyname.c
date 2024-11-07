#include <stdio.h>
#include "main.h"

/**
 * main- prints its name followed by a new line
 * @argc: not used argument count variable int
 * @argv: argument vector array of string containing all arguments
*/

void main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
}
