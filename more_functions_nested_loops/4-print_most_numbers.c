#include "main.h"

/**
 * print_most_numbers - prints most numbers between 0 & 9 except for 2 & 4
 *
 * Return: return 0
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar(10);
}
