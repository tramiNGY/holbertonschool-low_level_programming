#include <stdio.h>
/**
 * main- Print all single digit with comma and space
 * Return: returns 0
*/
int main(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
