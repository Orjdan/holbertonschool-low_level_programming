#include "main.h"

/**
 * print_triangle - Prints triangle based on input
 * @size: stdin for the triangle
 */
void print_triangle(int size)
{
	int a = 1;
	int b = 1;
	int i = size;
	int ib = b;

	if (size <= 0)
	{
		_putchar(10);
	}

	while (i > 0)
	{
		a = size - b;
		while (a > 0)
		{
			_putchar(32);
			a--;
		}
		while (b > 0)
		{
			_putchar(35);
			b--;
		}
		b = ib + 1;
		ib = b;
		i--;
		_putchar(10);
	}
}
