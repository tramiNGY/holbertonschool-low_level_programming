#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
int i = 0;
int length = 0;
char temp;

	while (s[i++])
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
