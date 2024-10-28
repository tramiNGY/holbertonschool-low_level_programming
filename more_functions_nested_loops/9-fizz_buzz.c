#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 1 to 100, x3 Fizz x5 Buzz x3x5 Fizzbuzz
*/
int  main(void)
{
int i;
printf("0 ");
for (i = 1; i <= 100; i++)
	if ((i % 3 == 0) && (i % 5 != 0))
		printf("Fizz ");
	else if ((i % 5 == 0) && (i % 3 != 0))
		printf("Buzz ");
	else if ((i % 3 == 0) && (i % 5 == 0))
		printf("FizzBuzz ");
	else
		printf("%d ", i);
return (0);
}
