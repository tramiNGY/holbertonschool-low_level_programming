#include "main.h"
/**
 * *leet - encodes a string into 1337
 * a/A by 4, e/E by 3, o/O by 0, t/T by 7 and l/L by 1
 * @s: string
 * Return: returns string encoded
*/

char *leet(char *s)
{
int i, j;

	char encode[20] = "a4A4e3E3o0O0t7T7k1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 19; j = j + 2)
		{
			if (s[i] == encode[j])
				s[i] = encode[j + 1];
		}
	}
return (s);
}
