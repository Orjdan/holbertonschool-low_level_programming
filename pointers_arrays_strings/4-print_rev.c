#include "main.h"

/**
 * print_rev - prints a string in reverse and new line
 * @s: string input
 */
void print_rev(char *s)
{
	char *s_address = &s[0];

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s >= s_address)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
