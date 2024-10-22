#include <stdio.h>
/**
 * main- Prints alphabet in lower acse except letters e and q
 * Return: returns 0
*/
int main(void)
{
int i;
for (i = 97; i <= 100; i++)
{
putchar(i);
}
for (i = 102; i <= 112; i++)
{
putchar(i);
}
for (i = 114; i <= 122; i++)
{
putchar(i);
}
printf("\n");
return (0);
}
