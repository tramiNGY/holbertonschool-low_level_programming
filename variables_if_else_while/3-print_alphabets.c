#include <stdio.h>
/**
 * main-c print alphabet lower case then uppercase
 * Return: returns 0
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
printf("\n");
return (0);
}
