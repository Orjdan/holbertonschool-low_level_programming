#include "main.h"

/**
 * print_sign - prints the sign
 * of a number based on +, 0 or -
 * @n: an integer
 * Return: returns 1, 0 or -1 based
 * on comparison
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
