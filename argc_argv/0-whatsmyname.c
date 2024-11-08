#include <stdio.h>
#include "main.h"

/**
 * main- prints its name followed by a new line
 * @argc: not used argument count variable int
 * @argv: argument vector array of string containing all arguments
 * Return: returns 0
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

return (0);
}
