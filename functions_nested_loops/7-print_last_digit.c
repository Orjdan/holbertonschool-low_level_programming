#include "main.h"

/**
 * print_last_digit - prints last digit of any number
 * @i: integer input
 * Return: returns the last digit
 */
int print_last_digit(int i)
{
	int r = i % 10;

	if (i >= 0)
	{
		i = r;
		_putchar('0' + i);
	}
	else
	{
		i = r;
		i = i * -1;
		_putchar('0' + i);
	}
	return (i);
}
