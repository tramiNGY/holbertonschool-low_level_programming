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
int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
		if (i == argc)
			printf("%s", argv[i]);
	}
	printf("\n");
return (0);	
}
