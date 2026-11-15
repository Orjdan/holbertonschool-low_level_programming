#include "main.h"

/**
 * print_line - prints an underscore n times.
 * @n: stdin for funciton
 */
void print_line(int n)
{
	while (n > 0)
	{
		n--;
		_putchar(95);
	}
	_putchar(10);
}
