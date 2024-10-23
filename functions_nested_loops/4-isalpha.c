#include <stdio.h>
/**
 * _isalpha - if letter return 1 else return 0
 * @c: character
 * Return: return 0 or 1
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
return (1);
else
return (0);
}
