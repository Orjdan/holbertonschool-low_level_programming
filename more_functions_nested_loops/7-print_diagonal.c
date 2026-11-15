#include "main.h"

/**
 * print_diagonal - functions that draws diagonal lines
 * @n: times '\' is printed
 */
void print_diagonal(int n)
{
	int i = 0;
	int b_sl = 0;
	int max = n;

	while (n > 0 && b_sl <= max)
	{
		_putchar(92);
		_putchar(10);
		b_sl++;
		i = b_sl;
		while (b_sl > 0)
		{
			_putchar(32);
			b_sl--;
		}
		b_sl = i;
		n--;
	}
	_putchar(10);
}
