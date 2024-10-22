#include <stdio.h>
/**
 * main- Prints alphabet in lower acse except letters e and q
 * Return: returns 0
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
printf("\n");
return (0);
}
