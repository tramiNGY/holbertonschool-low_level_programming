#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main- print last digit
 * Return: return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n % 10 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
}
if (n % 10 == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n % 10);
}
if (n % 10 < 6 && n % 10 != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
