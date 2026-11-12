#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - writes the
 * alphabet by using _putchar
 */
void print_alphabet(void)
{
	int a = 97;

	while (a >= 97 && a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
