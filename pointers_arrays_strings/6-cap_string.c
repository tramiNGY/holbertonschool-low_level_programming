#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * ie each word begins with a capital letter
 * @s: string
 * Return: returns capitalized string
*/

char *cap_string(char *s)
{
int i, j;

char separ[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == separ[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
return (s);
}
