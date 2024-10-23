#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet lowercase 10 times
*/
void print_alphabet_x10(void)
{
int j = 0;
while (j <= 10)
{
j++;
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
