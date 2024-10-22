#include <stdio.h>
/**
 * main- print all the numbers base 16 in lowercase
 * Return: returns 0
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
for (i = 97; i <= 102; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
