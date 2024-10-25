#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
int H = 0;
int h = 0;
int M = 0;
int m = 0;

	while (H <= 2)
	{
		while (h <= 9)
		{
			while (M <= 5)
			{
				while (m <= 9)
				{
					_putchar('0' + H);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + M);
					_putchar('0' + m);
					_putchar('\n');
					if (H == 2 && h == 3 && M == 5 && m == 9)
					{
						H = 3, m = 10, M = 6, h = 10;
					}
					else
						m = m + 1;
				}
				M = M + 1, m = 0;
			}
			h = h + 1, M = 0, m = 0;
		}
		H = H + 1, h = 0, M = 0, m = 0;
	}
}
