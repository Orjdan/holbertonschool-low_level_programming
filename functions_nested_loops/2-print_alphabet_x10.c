#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the
 * alphabet by using _putchar
 * 10 times
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int r = 0;

	while (r >= 0 && r < 10)
	{
		while (a >= 97 && a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		r++;
		a = 97;
	}
}
