#include "main.h"

/**
 * print_square - Prints a square, then new line
 * @size: size of the square
 */
void print_square(int size)
{
	int r = size;
	int c = size;

	if (size <= 0)
	{
		_putchar(10);
	}

	while (r > 0)
	{
		c = size;
		while (c > 0)
		{
			_putchar(35);
			c--;
		}
		_putchar(10);
		r--;
	}
}
