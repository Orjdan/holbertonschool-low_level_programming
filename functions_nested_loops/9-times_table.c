#include "main.h"

/**
 * times_table - prints the times table
 * from 0 to 9
 * Return: returns 0
 */
void times_table(void)
{
	int r = 0, c = 0, e = 0, r_01 = 0, r_10 = 0, p_01 = 0, p_10 = 0;

	while (r < 10)
	{
		while (c < 10)
		{
			p_01 = p_10 = 48;
			e = r * c;
			r_10 = e / 10;
			p_10 += r_10;
			r_01 = e % 10;
			p_01 += r_01;

			if (p_10 == 48)
			{
				if (c != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar(p_01);
			}
			else if (p_10 > 48)
			{
				_putchar(32);
				_putchar(p_10);
				_putchar(p_01);
			}
			c++;
			if (c != 10)
			{
				_putchar(44);
			}
		}
		r++;
		c = 0;
		_putchar(10);
	}
}
