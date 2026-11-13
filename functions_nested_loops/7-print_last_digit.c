#include "main.h"

/**
 * print_last_digit - prints last digit of any number
 * @i: integer input
 * Return: returns the last digit
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		i = i % 10;
		_putchar('0' + i);
	}
	else
	{
		i = i * -1;
		i = i % 10;
		_putchar('0' + i);
	}
	return (i);
}
