#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int c = 0;
	int i_01 = 48;
	int i_10 = 49;
	int r = 0;

	while (r >= 0 && r <= 9)
	{
		while (c >= 0 && c <= 14)
		{
			if (i_01 > 57)
			{
				i_01 = 48;
			}
			if (c > 9)
			{
				_putchar(i_10);
			}
			_putchar(i_01);
			i_01++;
			c++;
		}
		_putchar(10);
		i_01 = 48;
		r++;
		c = 0;
	}
}
