#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: integer stdin
 * Return: returns 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);

		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
		else if (n == 98)
		{
			printf("%i\n", n);
			break;
		}
	}

	if (n == 98)
	{
		printf("%i\n", n);
	}
}
